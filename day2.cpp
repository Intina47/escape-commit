//two-sum
//give an array [1,2,3,4,5] and a target=9 return the two indices from the array that add up to the target
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
class Solution {
	public:
		std::vector<int> twosum(std::vector<int> &arr, int target){
			if(arr.empty()){
				return {};
			}
			unordered_map<int, int> hashTable;
			hashTable.reserve(arr.size());
			for(int i=0; i<arr.size(); ++i) {
				int complement = target - arr[i];
				if(hashTable.count(complement)) {
					return {hashTable[complement], i};
				}
				hashTable[arr[i]] = i;
			}
			return {};
		}
};

int main() {
	Solution sol;
	vector<int> arr = {1,2,3,4,5};
	int target = 9;
	for(int i=0; i<arr.size(); ++i){
		cout << arr[i] << ",";
	}
	vector<int> result = sol.twosum(arr,target);
	for(int i=0; i<result.size(); ++i){
		cout << endl;
		cout <<"[" <<result[i] << "]";
	}
	return 0;
}
