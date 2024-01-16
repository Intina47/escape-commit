// find minimum in roxtated sorted array
/*
given a sorted array nums of unique elements
return the minimum element of this array
*/

#include <iostream>
#include <vector>
using namespace std;

int minimumelement(vector<int>& arr, int n){
	int res = arr[0];
	int l=0, r=n -1;
	while(l<=r){
		if(arr[l] < arr[r]){
			res = min(res, arr[l]);
			break;
		}
		int mid = (l+r)/2;
		res = min(res, arr[mid]);
		if(arr[mid] > arr[l] || arr[mid] == arr[l]){
			l = mid + 1;
		}else {
			r = mid -1;
		}
	}
	return res;
}

int main(){
	vector<int> arr = {1,2,3,5,6};
	int n = arr.size();
	int result = minimumelement(arr,n);
	cout << result <<endl;
	return 0;
}
// find minimum in rotated sorted array
/*
given a sorted array nums of unique elements
return the minimum element of this array
*/
