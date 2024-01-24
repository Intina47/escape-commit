// three sum
// three loops, i-first element, j-second element and k-look for third element
//time o(n*3)
#include <iostream>
#include <vector>
using namespace std;

bool isthreesum(vector<int>& arr, int n, int sum){
    for(int i=0; i<n-2; ++i){
        for(int j=i+1; j<n-1; ++j){
            for(int k=j+1; k<n; ++k){
                if(arr[i] + arr[j] + arr[k] == sum){
                    cout << "Three sum is true" << endl;
                    return true;
                }
            }
        }
    }
    cout << "false" <<endl;
    return false;
}

int main(){
    vector<int> arr = {4,6,7,8,9,9};
    int n = arr.size();
    isthreesum(arr,n,10);

    return 0;
}