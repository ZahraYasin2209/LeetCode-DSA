// Reverse String
// https://leetcode.com/problems/reverse-string/

#include <iostream>
#include <algorithm> // for std::reverse
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        reverse(s.begin(), s.end());
        
    }
};

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    sol.reverseString(s); 

    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
// Time Complexity: O(n)