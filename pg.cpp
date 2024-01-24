// search sorted array for a target value
// time complexity expected: o(log n)
//return the index otherwise return -1
#include <iostream>
#include <vector>
using namespace std;

int search_for_target(const vector<int>& arr, int target, int n){
    // lets implement binary search for the start
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;

        if(target == arr[mid]){
            return mid;
        }

        if(arr[l] <= arr[mid]){
            if(target > arr[mid] or target < arr[l]){
                l = mid + 1;
            }else{
                r = mid -1;
            }
        } else {
            if(target < arr[mid] or target > arr[r]){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
    }
    return -1;
}

int main(){
    const vector<int> arr = {4,5,6,7,8,0,1,2,3};
    int n = arr.size();
    int target = 9;
    int result = search_for_target(arr,target,n);
    cout << result <<endl;

    return 0;
}