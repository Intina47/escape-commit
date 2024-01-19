//bubble sort
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    for(int i=0; i<n-1; ++i){
        cout << "ARR I: " <<arr[i] << endl;
        for(int j=0; j<n-i-1; ++i){
            cout << "ARR J: " << arr[j] << ",";
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main(){
    vector<int> arr = {9,8,7,6,5,4,2,0};
    int size = arr.size();
    bubbleSort(arr, size);
     cout << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
    return 0;
}