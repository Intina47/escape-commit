// two sum
// return a pair of the indexes of the values
// not sorted

#include <vector>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

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
    const vector<int>arr = {0,3,-5,-2,8,-7,-6,-2,-3,-9};
    int n = arr.size();
    bool result = isunique(arr,n);
    if(result){
        cout << "Value appears twice" <<endl;
    }else{
        cout << "Unique" <<endl;
    }

    return 0;
}