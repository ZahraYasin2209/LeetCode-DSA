// Valid Anagram
// https://leetcode.com/problems/valid-anagram/description/

#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
        
    }
};

int main() {
    Solution sol;
    string s = "anagram";
    string t = "nagaram";

    cout << boolalpha << sol.isAnagram(s, t) << endl;  // Output: true
    return 0;
}
// Time Complexity: O(nlgn)