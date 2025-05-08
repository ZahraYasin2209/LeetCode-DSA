// Maximum Number of Vowels in a Substring of Given Length
// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        
        bool isVowel(char c)
        {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                return true;
            }
            else false;
        }

        int maxVowels(string s, int k) {
            int counter = 0;

            // Count vowels in the first window of size k
            for(int i = 0; i < k; i++)
            {
                if(isVowel(s[i]))
                {
                    counter++;
                }
            }

            // Slide the window through the string
            int maxCount = counter;
            for(int i = k; i < s.length(); i++)
            {
                if(isVowel(s[i]))
                {
                    counter++;              // new char entering the window
                }
                if(isVowel(s[i - k]))
                {
                    counter--;              // old char leaving the window
                }
                
                maxCount = max(maxCount, counter);      // update max vowels seen

            }
            return maxCount;
            
        }
    };

int main() {
    Solution sol;
    string s = "abciiidef";
    int k = 3;

    int result = sol.maxVowels(s, k);
    cout << "Maximum number of vowels in any substring of length " << k << " is: " << result << endl;

    return 0;
}


// Time Complexity: O(n)  
// Space Complexity: O(1)
