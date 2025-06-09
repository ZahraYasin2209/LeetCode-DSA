// Remove Trailing Zeros from a String
// https://leetcode.com/problems/remove-trailing-zeros-from-a-string/description/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeTrailingZeros(string num) 
    {
        int last = -1;                  // Initialize to -1 to handle all-zero case

        for (int i = num.size() - 1; i >= 0; i--) 
        {
            if (num[i] != '0') 
            {
                last = i;               // Found the last non-zero digit
                break;
            }
        }

        // If all digits are '0'
        if (last == -1) return "0";

        return num.substr(0, last + 1);
    }
};

int main() 
{
    Solution sol;
    cout << sol.removeTrailingZeros("51230000") << endl;        // Output: "5123"
    cout << sol.removeTrailingZeros("1000") << endl;            // Output: "1"
    cout << sol.removeTrailingZeros("0") << endl;               // Output: "0"
    cout << sol.removeTrailingZeros("0000") << endl;            // Output: "0"
    return 0;
}
// Time Complexity: O(n)