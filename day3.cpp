// longest substring
#include <iostream>
#include <unordered_set>
#include <string>

class Solution {
	public:
		int longestSub(std::string s){
			std::unordered_set<char> seen;
			int maxsub=0, i=0, j=0;
			while(j<s.length()){
				if(!seen.count(s[j])){
					seen.insert(s[j]);
					j++;
					maxsub = std::max(maxsub, j-i);
				}else {
					seen.erase(s[i]);
					i++;
				}
			}
			return maxsub;
		}
};

int main(){
	Solution sol;
	std::string s = "abcabb";
	int result = sol.longestSub(s);
	std::cout << result << std::endl;
	return 0;
}
