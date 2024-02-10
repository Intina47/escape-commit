// 387. First Unique Character in a String
// Given a string s, find the first non-repeating character in it and return its index. 
//If it does not exist, return -1.
 
// Example 1:=
// Input: s = "leetcode"
// Output: 0
#include <iostream>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s){
    unordered_map<char, int> map;
    for(int i=0; i<s.length(); ++i){
        map[s[i]]++;
    }

    for(int i=0; i<s.length(); ++i){
        if(map[s[i]] == 1){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    string input = "eletcode";
    int res = firstUniqChar(input);
    cout <<"Non repeating index is: "<< res << endl;

    return 0;
}