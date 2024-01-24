// two sum
// return a pair of the indexes of the values
// not sorted

#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

vector<int> twosum(vector<int> &arr, int n, int target){
    unordered_map<int,int> ht ;
    for(int i=0; i<n; ++i){
        int complement = target - arr[i];
        if(ht.count(complement)){
            return {ht[complement], i};
        }
        ht[arr[i]] = i;
    }
    return {};
}

int  main(){
    vector<int> arr = {2,4,5,6,8,1};
    int n = arr.size();
    vector<int> ar = twosum(arr, n, 14);
    for(const auto& element : ar){
        cout << element << ", ";
    }
return 0;
}