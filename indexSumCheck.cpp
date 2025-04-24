// Index Sum Check (Equality of indices sum of even and odd)


// Given an array, check if the sum of elements at odd indices equals the sum of elements at even indices. 
// Return equal, even, or odd accordingly.


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void equality(vector<int> array)
    {
        int sumEven = 0, sumOdd = 0;
        for(int i = 0; i < array.size(); i++)
        {
            if(i % 2 == 0)                // index is even
            {
                sumEven += array[i];
            }
            else if((i % 2) != 0)
            {
                sumOdd += array[i];
            }
        }
        if(sumEven == sumOdd)
        {
            cout << "Equal";
        }
        else if(sumEven > sumOdd)
        {
            cout << "Even";
        }
        else
        {
            cout << "Odd";
        }
    }
};

int main() {
    Solution sol;
    vector<int> array = {1, 4, 3, 2, 4, 3};

    sol.equality(array);           // Odd

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)