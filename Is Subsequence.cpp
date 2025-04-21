// Is Subsequence
// Problem Link: https://leetcode.com/problems/is-subsequence/?envType=study-plan-v2&envId=leetcode-75


// A subsequence means characters of s appear in order inside t — skips are allowed.
// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int i = 0, j = 0;
        while(i < s.size() && j < t.size())
        {
            if(s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        return i == s.length();     // if condition holds, return true, else false
    }
};

int main() {
    Solution sol;
    string s = "ace", t = "abcde";

    cout << (sol.isSubsequence(s, t) ? "true" : "false") << endl;    // true

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)