// Valid Palindrome
// https://leetcode.com/problems/valid-palindrome/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) 
    {
        int left = 0;
        int right = s.size() - 1;

        while(left < right)
        {
            while(left < right && !isalnum(s[left]))
            {
                left++;
            }
            while(left < right && !isalnum(s[right]))
            {
                right--;
            }

            if(tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

// isalnum(char) is a C++ standard library function (from <cctype>) that checks whether a character is alphanumeric,
// A–Z (uppercase letters)
// a–z (lowercase letters)
// 0–9 (digits)

int main() {
    Solution sol;

    string input1 = "A man, a plan, a canal: Panama";
    string input2 = "race a car";
    string input3 = " ";

    cout << boolalpha; // Print true/false instead of 1/0
    cout << "Input: \"" << input1 << "\"\nOutput: " << sol.isPalindrome(input1) << endl;
    cout << "Input: \"" << input2 << "\"\nOutput: " << sol.isPalindrome(input2) << endl;
    cout << "Input: \"" << input3 << "\"\nOutput: " << sol.isPalindrome(input3) << endl;

    return 0;
}

// Time Complexity: O(n)