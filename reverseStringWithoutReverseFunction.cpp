// Reverse String
// https://leetcode.com/problems/reverse-string/

#include <iostream>
#include <algorithm> // for std::reverse
#include <string>
#include <vector>
using namespace std;

void reverseString(vector<char> &str)
{

    int left = 0;
    int right = str.size() - 1;

    while(left < right)
    {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    
    string s = "hello world";
    vector<char> str(s.begin(), s.end());

    reverseString(str);

    for(int i = 0; i < s.size(); i++)
    {
        cout<< str[i] << " ";      // d l r o w   o l l e h
    }
    return 0;
}
// Time Complexity: O(n)