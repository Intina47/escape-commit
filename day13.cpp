//anagram an anagram is a 
#include <iostream>
#include <algorithm>
#include <unordered_map>
bool isAnagram(std::string a, std::string b){
	if(a.length() != b.length()){
		return false;
	} else if(a.empty() && b.empty()){
		return true;
	}

	std::transform(a.begin(), a.end(), a.begin(), ::tolower);
	std::transform(b.begin(), b.end(), b.begin(), ::tolower);

	std::unordered_map<char, int> map;
	for(int i=0; i<a.length(); ++i){
		map[a[i]]++;
	}

	for(int i=0; i<b.length(); ++i){
		if(map.find(b[i]) != map.end() && map[b[i]] > 0){
			map[b[i]] -= 1;
		}else{
			return false;
		}
	}
	return true;
}

int main(){
	std::string a = "abcd";
	std::string b = "abcd";
	bool result = isAnagram(a,b);
	if(result){
		std::cout << "Strings are anangram!" <<std::endl;
	}else{
		std::cout << "Not Anangram" <<std::endl;
	}
}
