//interger to roman
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution{
	public:
		std::string to_roman(int value){
			std::string result;
			vector<std::pair<int,string> > valpairs = { {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
			};

			for(int i=0; i<valpairs.size(); ++i){
				while(value >= valpairs.size()){
					result += valpairs[i].second;
					value -= valpairs[i].first;
				}
			}
			return result;
		}
};

int main(){
	Solution sol;
	int value = 1000;
	std::string result = sol.to_roman(value);
	std::cout << value << "= " << result << endl;
	return 0;
}
