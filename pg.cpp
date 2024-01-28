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

int main() {
    // int num = 19;

    // if (isHappy(num)) {
    //     std::cout << num << " is a happy number." << std::endl;
    // } else {
    //     std::cout << num << " is not a happy number." << std::endl;
    // }

    vector<int> arr = {5, 2, 3};
    int target = 8;

    vector<int> result = twosum(arr, target);
    for(const auto& element: result){
        cout << element << ",";
    }
    cout << endl;

    return 0;
}