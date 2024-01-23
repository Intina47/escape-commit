#include <iostream>
using namespace std;
class Solution{
    public:
    int search(int arr[], int target, int n){
        int l=0, r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(target == arr[mid]){
                return mid;
            }
            
            // left sorted portion
            if(arr[l] <= arr[mid]){
                if(target > arr[mid] || target < arr[l]){
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
                // right sorted portion
            }else {
                if(target< arr[mid] || target > arr[r]){
                    r = mid - 1;
                }else {
                    l = mid + 1;
                }
            }
        }
        return -1;
    }
}

int main(){
  int arr[] = {4,5,6,7,0,1,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  int target = 0;
  Solution sol;
  int result = sol.search(arr, target, n);
  cout << result << endl;
  return 0;
}
