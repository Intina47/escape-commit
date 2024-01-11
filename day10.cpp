//Maximum Product Subarray
//Given an array that contains both positive and negative integers, the task is to find the product of the maximum product subarray.
//
#include <iostream>
using namespace std;

int maxProdSub(int arr[], int n){
	int currentProd = 1;
	int maxProduct = 1;
	for(int i=0; i<n; ++i){
		if(arr[i] == 0){
			currentProd = 1;
		}
		currentProd *= arr[i];
		maxProduct = max(maxProduct, currentProd);
	}
	currentProd = 1;
	for(int i=n-1; i>=0; --i){
		if(arr[i] == 0){
			currentProd = 1;
		}
		currentProd *= arr[i];
		maxProduct = max(maxProduct, currentProd);
	}
	return maxProduct;
}

int main(){
	int arr[] = {-1, -3, -10, 0, 60};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = maxProdSub(arr, n);
	cout << result <<endl;
	return 0;
}
