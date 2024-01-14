//largest num in an arr
#include <iostream>
using namespace std;

int largestnum(int arr[], int n){
	int largestnum = arr[0];
	for(int i=0; i<n; ++i){
		if(arr[i] > largestnum){
			largestnum = arr[i];
		}
	}
	return largestnum;
}

int secondLargest(int arr[], int n){
	int largestnum = arr[0];
	int secondLargest = -1;
	for(int i=0; i<n; ++i){
		if(arr[i] > largestnum){
			secondLargest = largestnum;
			largestnum = arr[i];
		}else if(arr[i] >= secondLargest && arr[i] != largestnum){
			secondLargest = arr[i];
		}
	}
	return secondLargest;
}

int main(){
	int arr[] = {2,1,0,10,12,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = largestnum(arr,n);
	cout << result << endl;
	int secondl = secondLargest(arr, n);
	cout << secondl <<endl;
	return 0;
}
