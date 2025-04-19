// LeetCode Problem: Reverse Vowels of a String
// https://leetcode.com/problems/reverse-vowels-of-a-string/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Helper function to check if a character is a vowel (case-insensitive)
    bool isVowel(char c)
    {
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i = 0; i < vowels.size(); i++){
            if(c == vowels[i])
            {
                return true;
            }
        }
        return false;
    }

    // Function to reverse only the vowels in the input string
    string reverseVowels(string s) {
        int left = 0, right = s.size() - 1;

        // Two-pointer approach to find and swap vowels from both ends
        while(left < right){
            while(left < right && !isVowel(s[left])) 
            {
                left++;
            }

            while(left < right && !isVowel(s[right])) 
            {
                right--;
            }

            if(left < right)
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};

int main() {
    Solution sol;
    string s = "a.b,.";
    string result = sol.reverseVowels(s);

    cout << "Output: " << result << endl;
    return 0;
}

// Time Complexity: O(n) - where n is the length of the string
// Space Complexity: O(1) - no extra space used except fixed vowel list
