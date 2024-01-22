//find the minimum in rotated sorted array
//given a sorted array nums of unique elements , return the minimum element of this array
//approach: Binary searcg TC: O(log n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// merge sorte
void bubbleSort(vector<int> &arr, int n){
    for(int i=0; i<n-1; ++i){
        for(int j=0; j<n-i-1; ++j){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int minElement(vector<int>& arr, int n){
    cout << "Finding minimum element from: ";
    for(const auto& element : arr){
        cout << element << ",";
    }
    int left = 0, right = n-1;
    int minres = arr[0];
    while(left < right){
        if(arr[left] < arr[right]){
            minres = min(minres, arr[left]);
            break;
        }

        int mid = (left + right) /2;
        minres = min(minres, arr[mid]);
        if(arr[mid] >= arr[left] || arr[mid] == arr[left]){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    return minres;
}

int main(){
    vector<int> arr = {3,7,9,8,4,0,5,6,1,2};
    int n = arr.size();
    bubbleSort(arr, n);
    cout << endl;
    cout << "Sorted: ";
    for(int i=0; i<n; ++i){
    cout << arr[i] << ",";
    }
    
    cout << endl;
     
    // simple rotation to the right
    std::rotate(arr.rbegin(), arr.rbegin() + 5, arr.rend());
    cout << "rotated Array: ";
    for(const auto& element: arr){
        cout << element << ",";
    }
    cout << endl;
    int smallnum  = minElement(arr,n);
    cout << "Smallest Num: " <<  smallnum <<endl;
    cout << endl;
    return 0;
}