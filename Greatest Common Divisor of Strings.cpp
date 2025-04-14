//https://leetcode.com/problems/greatest-common-divisor-of-strings/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <algorithm>  // for __gcd
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    
        // Check if str1 and str2 are compatible for a common base pattern
        if (str1 + str2 != str2 + str1) {
            return ""; // No valid GCD string exists
        }

        // Find GCD of lengths
        int gcdLength = __gcd(str1.length(), str2.length());

        // Return the substring from index 0 to gcdLength
        return str1.substr(0, gcdLength);
    }
};

int main() {
    Solution sol;
    string str1 = "ABCABCABC";
    string str2 = "ABCABC";
    cout << "GCD of strings: " << sol.gcdOfStrings(str1, str2) << endl; // Output: "ABC"
    return 0;
}


//Time Complexity: O(m + n)  --> m: operations on str1, n: operations on str2