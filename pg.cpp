// two sum
// return a pair of the indexes of the values
// not sorted

#include <vector>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <map>
using namespace std;

//give an array [1,2,3,4,5] and a target=9 return the two indices from the array that add up to the target
class twosumSolution {
    public:
        std::vector<int> twosum(const vector<int> &arr, int target){
        if(arr.empty()){
            return {};
        }
        unordered_map<int, int> indices;
        for(int i=0; i<arr.size(); ++i){
            int complement = target - arr[i];
            if(indices.count(complement)){
                return {indices[complement], i};
            } else{
                indices[arr[i]] = i;
            }
        }
        return {0,0};
    }

    // map traversal and declaration
    void coutFrequencies(const vector<int>& arr, int n){
        map<int,int>mp;
        for(int i=0; i<n; ++i){
            mp[arr[i]]++;
        }

        for(auto x : mp){
            cout << x.first << " " << x.second << endl;
        }
    }
};
// Given an array the size of 100 with the numbers 1-100 except one, find the missing number.
// arr = [1, ..., 100]
int findMissingNumber(const std::vector<int>& numbers) {
    int n = 10;
    int expected_sum = n * (n + 1 ) / 2 ; //sum of an arithmetic
    int current_sum = 0;
    for(auto num : numbers){
        current_sum += num;
    }
    return (expected_sum - current_sum);
}

// two sum
vector<int> twosum(const vector<int>& arr, int target){
    unordered_map<int, int> seen;
    for(int i=0; i<arr.size(); ++i){
        int complement = target - arr[i];
        if(!seen.count(complement)){
            seen[arr[i]] = i;
        }else{
            return {seen[complement], i};
        }
    }
    return {0,0};
}

// happy number
/**/

int digitSquareSum(int n){
    cout << "Our N: "<< n <<endl;
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        cout << "OUr Digit: " << digit <<endl;
        sum += digit * digit;
        cout << "Our Sum: " << sum <<endl;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    std::unordered_set<int> seen;

    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = digitSquareSum(n);
    }

    return n == 1;
}

//Maximum Product Subarray
//Given an array that contains both positive and negative integers, the task is to find the product of the maximum product subarray.
//

int maxSum(int arr[], int n){
    if(n == 0){
        cout << "Empty Array" <<endl;
        return 0;
    }
    int maxval = arr[0];
    int minval = arr[0];
    int maxprod = arr[0];
    for(int i=0; i<n; ++i){
        if(arr[i] < 0){
            swap(maxval, minval);

            maxval = max(arr[i], maxval*arr[i]);
            minval = min(arr[i], minval*arr[i]);

            maxprod = max(maxprod, maxval);
        }
    }
    return maxprod;
}

/*
given an array of intergers return true 
if any of the values in the array appear
atleast twice in the array and false if every element is distinct.
*/

bool isunique(const vector<int>& arr, int n){
    unordered_set<int> seen;
    for(int i=0; i<n; ++i){
        if(seen.count(arr[i])){
            cout << arr[i] << " Appears twice" <<endl;
            return true;
        }else{
            seen.insert(arr[i]);
        }
    }
    return false;
}


int main() {
    twosumSolution sol;
    vector<int> arr = {1,2, 4, 5, 6,1, 2, 4, 5, 6, 7, 2, 2, 3, 2, 2, 22, 2, 2, 2, 2,2, 2,  7, 8, 9, 3};
    int target = 17;
    int n = arr.size();
    sol.coutFrequencies(arr,n);
    return 0;
}