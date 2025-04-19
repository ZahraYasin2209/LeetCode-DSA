// Reverse Words in a String
//https://leetcode.com/problems/reverse-words-in-a-string/submissions/1611555407/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;

        // Split the string into words
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ') {
                word += s[i];
            } else if(!word.empty()) {
                words.push_back(word);
                word = "";              // Clear word for the next one
            }
        }

        // Push the last word if exists
        if(!word.empty()) {
            words.push_back(word);
        }

        // Build the result from words in reverse order
        string result;
        for(int i = words.size() - 1; i >= 0; i--) {
            result += words[i];
            if(i != 0) result += " ";
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s = "the sky is blue";
    string result = sol.reverseWords(s);

    cout << "Output: \"" << result << "\"" << endl;  // Output: "blue is sky the"
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)