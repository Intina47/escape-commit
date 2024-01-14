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

int main(){
	int arr[] = {2,1,0,10,12,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = largestnum(arr,n);
	cout << result << endl;
	return 0;
}
