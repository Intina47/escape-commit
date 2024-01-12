//palindrome sentence
//
#include <iostream>
using namespace std;

class Solution{
	public:
		bool isPalindrome(string str){
			int left = 0;
			int right = str.length()-1;
			while(left <= right){
				if(!isalnum(str[left])){
					left++;
				}else if(!isalnum(str[right])){
					right--;
				}else if(tolower(str[left]) != tolower(str[right])){
					return false;
				}else{
					left++, right--;
				}
			}
			return true;
		}
};

int main(){
	string input = "Race car";
	Solution sol;
	bool result = sol.isPalindrome(input);
	if(result == 1){
		cout << "Palindrome" <<endl;
	}else{
		cout << "Not a Palindrome" <<endl;
	}
	return 0;
}
