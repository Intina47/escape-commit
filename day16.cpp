// longest substring in a given string
// sliding window

#include <iostream>
#include <unordered_set>
using namespace std;

int maxSub(string input){
    int maxlen = 0;
    int p1 =0, p2=0;
    unordered_set<char> seen;
    while(p2<input.length()){
         if(!seen.count(input[p2])){
            seen.insert(input[p2]);
            p2++;
            maxlen = max(maxlen, p2-p1);
         }else {
            seen.erase(input[p1]);
            p1++;
         }
    }
    return maxlen;
}

int main(){
    string input = "Abcddefghij";
    int result = maxSub(input);
    cout << result << endl;
    return 0;
}