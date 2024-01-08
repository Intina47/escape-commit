//238. Product of Array Except Self
#include <iostream>
#include <vector>

class Solution{
	public:
		std::vector<int> productofArray(std::vector<int>&nums){
			int n = nums.size();
			int i, temp=1;
			std::vector<int> result(n, 1);
			for(i=0; i<n; ++i){
				result[i] = temp;
				temp *= nums[i];
			}
			temp = 1;
			for(i=n-1; i>=0; --i)
			{
				result[i] *= temp;
				temp *= nums[i];
			}
			return result;
		}
};
int main(){
	Solution sol;
	std::vector<int> nums = {1,2,3,45,6};
	std::vector<int> result = sol.productofArray(nums);
	for(int i=0; i<result.size(); ++i){
		std::cout << result[i] << ",";
	}
	return 0;
}
