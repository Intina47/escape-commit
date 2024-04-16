#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

std::string ArrayChallenge(std::string strArr[], int arrLength) {
    std::string input_string = strArr[0];
    std::string dictionary_string = strArr[1];
    
    // Create a vector to store words from the dictionary
    std::vector<std::string> dictionary;
    
    // Split the dictionary string and store the words in the vector
    std::istringstream iss(dictionary_string);
    std::string word;
    while (std::getline(iss, word, ',')) {
        dictionary.push_back(word);
    }
    
    // Iterate through the input string to find a valid split
    std::string output;
    for (int i = 1; i < input_string.length(); ++i) {
        std::string word1 = input_string.substr(0, i);
        std::string word2 = input_string.substr(i);
        
        // Check if both words exist in the dictionary
        if (std::find(dictionary.begin(), dictionary.end(), word1) != dictionary.end() &&
            std::find(dictionary.begin(), dictionary.end(), word2) != dictionary.end()) {
            output = word1 + "," + word2;
            break;
        }
    }
    
    // If no valid split is found, set the output to "not possible"
    if (output.empty()) {
        return "not possible";
    }
    
    // Remove characters from the output that appear in ChallengeToken
    std::string ChallengeToken = "e";
    output.erase(std::remove_if(output.begin(), output.end(), [&](char c) {
        return ChallengeToken.find(tolower(c)) != std::string::npos;
    }), output.end());
    
    // Check if the new final string is empty
    if (output.empty()) {
        return "empty";
    }
    
    return output;
}

int main() {
    // Test the function
    std::string arr1[] = {"hellocat", "apple,bat,cat,goodbye,hello,yellow,why"};
    std::cout << ArrayChallenge(arr1, 2) << std::endl;  // Output: e
    
    std::string arr2[] = {"baseball", "a,all,b,ball,bas,base,cat,code,d,e,quit,z"};
    std::cout << ArrayChallenge(arr2, 2) << std::endl;  // Output: e
    
    return 0;
}


#using iss to extract word from a dictionary.
/**istringstream: allows us to treat a string as an dictionary_input
stream
example below initilizes iss with string dictionary_input and 
then we 
*/
#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string dictionary_input = "banana apple melon";
    istream iss(dictionary_input);

    string word;

    while (iss >> word){
        cout << ',' << word;
    }

    return 0;
}
