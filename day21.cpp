// running sum of an array
#include <iostream>

int* runningSum(int arr[], int n){
    int current_sum = 0;
    int* running_sum = new int[n];

    for(int i=0; i<n; ++i){
        current_sum += arr[i];
        running_sum[i] = current_sum;
    }

    return running_sum;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* result = runningSum(arr,n);

    std::cout << "[";
    for(int i=0; i<n; ++i){
        std::cout << result[i];
        if(i<n-1){
           std::cout << ",";
        }
    }
    std::cout << "]";
    std::cout << std::endl;
    delete[] result;
    return 0;
}