//Maximum Product Subarray
//Given an array that contains both positive and negative integers, the task is to find the product of the maximum product subarray.
//
#include <iostream>
using namespace std;

int maxProdSub(int arr[], int n){
	int currentProd = 1;
	int maxProduct = INT_MIN;
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

//optimized solution, takes into consideration negative numbers
int maxSubProd(int arr[], int n){
	int minval = arr[0];
	int maxval = arr[0];
	int maxprod = arr[0];
	for(int i=0; i<n; ++i){
		if(arr[i] < 0){
			swap(maxval,minval);
		}
		maxval = max(arr[i], maxval*arr[i]);
		minval = min(arr[i], minval*arr[i]);

		maxprod = max(maxprod, maxval);
	}
	return maxprod;
}

int main(){
	int arr[] = {0,3,-5,-2,8,-7,-6,-2,-3,-9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = maxProdSub(arr, n);
	int optimizedResult = maxSubProd(arr, n);
	cout <<"Option 1: " << result <<endl;
	cout << "Optmized result: " << optimizedResult <<endl;
	return 0;
}
