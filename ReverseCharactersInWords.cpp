// Problem Statement: Reverse characters of each word in a string to generate new words

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> reverseWords(vector<string>& words) {
    vector<string> result;

    for(int i = 0; i < words.size(); i++)
    {
        string word = words[i];
        reverse(word.begin(), word.end());
        result.push_back(word);
    }
    return result;
}

int main() {
    vector<string> words = {"code", "chat", "fun"};
    vector<string> reversedWords = reverseWords(words);

    for (int i = 0; i < reversedWords.size(); i++) {
        cout << reversedWords[i] << " ";          // Output: edoc tahc nuf
    }

    return 0;
}

// Time Complexity: O(n * k)
// Space Complexity: O(n * k)
