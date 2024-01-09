//reverse a string
#include <iostream>
#include <string>
using namespace std;

class Solution{
	private:
		string input = "mamba";
	public:
		string reverseString(){
			int len = input.size();
			for(int i=0; i<len/2; i++){
				char temp = input[i];
				input[i] = input[len -1-i];
				input[len -1-i] = temp;
			}
			return input;
		}
};

int main(){
	Solution sol;
	string result = sol.reverseString();
	cout << result;
	return 0;
}
