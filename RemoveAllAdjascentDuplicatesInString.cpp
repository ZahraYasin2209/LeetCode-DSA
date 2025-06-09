// Remove All Adjascent Duplicates in String
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        int j = 0;

        for(int i = 0; i < s.length(); i++)
        {
            s[j] = s[i];

            if(j > 0 && s[j] == s[j - 1])
            {
                j = j - 2;
            }
            j++;
        }
        return s.substr(0, j);
    }
};

int main() {
    Solution sol;
    cout << sol.removeDuplicates("abbaca") << endl;   // Output: "ca"
    cout << sol.removeDuplicates("azxxzy") << endl;   // Output: "ay"
    return 0;
}

// Time Complexity: O(n)