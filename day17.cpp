// - [ ] Write a function that take an array of integers and returns multiples that add up to zero
#include <iostream>
#include <unordered_set>
using namespace std;

pair<int,int> sumTozero(int arr[], int n){
    unordered_set<int> complement_set;
    for(int i=0; i<n; ++i){
        int complement = -arr[i];
        if(complement_set.count(complement)){
            return make_pair(arr[i], complement);
        } else{
            complement_set.erase(arr[i]);
        }
    }
    return make_pair(0,0);
}
int main(){
    int arr[]= {1,2,-1,0,5,-2,-5};
    int n = sizeof(arr)/sizeof(arr[0]);
    pair<int,int> result = sumTozero(arr,n);
    cout << "Pair: " << result.first << "," << result.second <<endl;
    
    return 0;
}
