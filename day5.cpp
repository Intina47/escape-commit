/*
given an array of intergers return true if any of the values in the array appear atleast twice in the array and false if every element is distinct.
*/
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution{
	public:
		bool containsDuplicate(int arr[], int n){
			bool result = false;
			unordered_set<int> seen;
			for(int i=0; i<n; ++i){
				if(seen.count(arr[i])){
					result = true;
					cout << "This is true" <<endl;
				}else{
					seen.insert(arr[i]);
				}
			}
			return result;
		}
};

int main(){
	Solution sol;
	int arr[] = {1,1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	bool result = sol.containsDuplicate(arr, n);
	if(result == 0 ){
		cout << "False" <<endl;
	}else {
		cout << "True" <<endl;
	}
	return 0;
}
