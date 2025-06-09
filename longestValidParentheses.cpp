// Longest Valid Parentheses
// https://leetcode.com/problems/longest-valid-parentheses/description/

#include <iostream>
#include <string>
#include <algorithm>  // for max()
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0, right = 0, maxLength = 0;

        // Left to Right Pass
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(')
                left++;
            else
                right++;

            if (left == right)
                maxLength = max(maxLength, 2 * right);
            else if (right > left)
                left = right = 0;
        }

        left = right = 0;

        // Right to Left Pass
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '(')
                left++;
            else
                right++;

            if (left == right)
                maxLength = max(maxLength, 2 * left);
            else if (left > right)
                left = right = 0;
        }

        return maxLength;
    }
};

int main() {
    Solution sol;
    
    string s1 = ")()())";
    cout << "Longest valid parentheses length: " << sol.longestValidParentheses(s1) << endl;
    
    string s2 = "(()())";
    cout << "Longest valid parentheses length: " << sol.longestValidParentheses(s2) << endl;
    
    string s3 = "(()";
    cout << "Longest valid parentheses length: " << sol.longestValidParentheses(s3) << endl;

    return 0;
}
// Time Complexity: O(n)