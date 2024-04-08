// running sum of an array
#include <iostream>
#include <vector>

int* runningSum(int arr[], int n){
    int current_sum = 0;
    int* running_sum = new int[n];

    for(int i=0; i<n; ++i){
        current_sum += arr[i];
        running_sum[i] = current_sum;
    }

    return running_sum;
}
std::vector<int> runningsum(int arr[], int n){
    int current_sum = 0;
    std::vector<int> running_sum(n);

    for(int i=0; i<n; ++i){
        current_sum += arr[i];
        running_sum[i] = current_sum;
    }

    return running_sum;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::vector<int> result = runningsum(arr,n);

    std::cout << "[";
    for(int i=0; i<n; ++i){
        std::cout << result[i];
        if(i<n-1){
           std::cout << ",";
        }
    }
    std::cout << "]";
    std::cout << std::endl;
    // delete[] result;
    return 0;
}