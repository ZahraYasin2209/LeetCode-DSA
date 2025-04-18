// LeetCode Problem: Can Place Flowers
// https://leetcode.com/problems/can-place-flowers/submissions/1610867063/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0)      //zero indicating empty plot
            {
                // Check if the left and right plots are also empty or out-of-bounds
                bool isLeftEmpty = ((i == 0) || flowerbed[i - 1] == 0);
                bool isRightEmpty = ((i == flowerbed.size() - 1) || flowerbed[i + 1] == 0);  
                
                if(isLeftEmpty && isRightEmpty)
                {
                    flowerbed[i] = 1;      // Plant a flower here
                    n--;                   // One less flower to plant


                    if (n == 0) {
                        return true;   // Early exit if all flowers are placed
                    }
                }
            }
        }
        return n<=0;
    }
};

int main() {
    // Sample input
    vector<int> flowerbed = {1,0,0,0,0,1};
    int n = 2;

    Solution sol;
    bool result = sol.canPlaceFlowers(flowerbed, n);

    // Output the result
    cout << "Result: "; 
    if(result)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}


// Time Complexity: O(n)
// Space Complexity: O(1)