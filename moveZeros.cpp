// Move Zeros
// Problem Link: https://leetcode.com/problems/move-zeroes/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int lastNonZeroIndex = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)                                    // if element is not zero
            {
                nums[lastNonZeroIndex] = nums[i];               
                lastNonZeroIndex++;
            }
        }

        for(int i = lastNonZeroIndex; i < nums.size(); i++)    // start placing zero from last non-zero element
        {
            nums[i] = 0;
        }
            
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};            

    sol.moveZeroes(nums);

    for (int num : nums) {             
        cout << num << " ";            // 1 3 12 0 0
    }
    cout << endl;

    return 0;
}

// Note: In case of only one element, if 0 --> return zero, if non-zero --> return that non-zero element

// Time Complexity: O(n)
// Space Complexity: O(1)
