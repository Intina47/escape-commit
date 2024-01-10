// maximum sub array
/*
given an integer array nums, find the constigous subarray containing atleast one number which has the largest sum and return its sum.
*/
#include <iostream>
using namespace std;
class Solution{
	public:
		int maxSubArray(int arr[], int n){
			int maxSub = arr[0];
			int currentSum = 0;
			for(int i=0; i<n; ++i){
				if(currentSum < 0){
					currentSum = 0;
				}
				currentSum += arr[i];
				maxSub = max(maxSub, currentSum);
			}
			return maxSub;
		}
};

int main(){
	int arr[] = {1,2,4,4,55,-100,101};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution sol;
	int result = sol.maxSubArray(arr, n);
	cout << result << endl;
	return 0;
}
