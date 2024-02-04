/**
 * TWO SUM II
 * Given an array sorted in non-decreasing order and a target number,
 * find the indices of the two values from the array that sum up to the given target number.
 * 
 * arr = [1,2,3,4,5]
 * target = 7
*/
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSumII(const vector<int>& arr, int target, int n){
    unordered_map<int, int> seen;
    for(int i=0; i<n; ++i){
        int complement = target - arr[i];
        if(seen.count(complement)){
            return {seen[complement], i};
        }else{
            seen[arr[i]] = i;
        }
    }
    return {};
}

int main(){
    const vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int target = 10;
    vector<int> result = twoSumII(arr,target,n);
    for(const auto& element : result){
        cout << element;
    }
    return 0;
}