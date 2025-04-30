// String Compression
// Problem Link: https://leetcode.com/problems/string-compression/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int write = 0;
        for(int i = 0; i < chars.size(); i++)
        {
            char currentCharacter = chars[i];           // to hold the current character
            int counter = 0;                            // to calculate the occurance of character

            for(int j = i; j < chars.size() && chars[j] == currentCharacter; j++)
            {
                counter++;                              // character exists more than once
            }

            chars[write] = currentCharacter;
            write++;

            if(counter > 1)                            // existance of character is more than one
            {
                string counterString = to_string(counter);     
                for(int k = 0; k < counterString.length(); k++)
                {
                    chars[write] = counterString[k];     // writing the occurance of character in string
                    write++;
                }
            }

            i = i + counter - 1;
        }
        return write;
            
    }
};

int main() {
    Solution sol;
    vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};

    int newLength = sol.compress(chars);

    cout << "Compressed length: " << newLength << endl;               // Compressed length: 4
    cout << "Compressed chars: ";                                     // Compressed chars: a b 1 2  (12 as 1 2)
    for (int i = 0; i < newLength; ++i) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
