//find the minimum in rotated sorted array
//given a sorted array nums of unique elements , return the minimum element of this array
//approach: Binary searcg TC: O(log n)
#include <iostream>
using namespace std;
int minElement(int arr[], int n){
    int left =0, right = n -1;
    int minres = arr[0];
    while(left < right){
        if(arr[left] < arr[right]){
            minres = min(minres, arr[left]);
            break;
        }

        int mid = (left + right) / 2;
        cout << "Mid now: " << arr[mid] <<endl;
        minres = min(minres, arr[mid]);
        if(arr[mid] > arr[left] || arr[mid] == arr[left]){
            left = mid + 1;
            cout << "Left Now: " << arr[left] <<endl;
        }else{
            right = mid - 1;
             cout << "Left Now: " << right <<endl;
        }
    }
    return minres;
}

int main(){
    int arr[] = {4,5,6,7,8,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = minElement(arr, n);
    cout <<"Min element: " <<result << endl;
return 0;
}