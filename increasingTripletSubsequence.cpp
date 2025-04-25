// Increasing Triplet Subsequence
// https://leetcode.com/problems/increasing-triplet-subsequence/submissions/1611829101/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int first = INT_MAX, second = INT_MAX;  // Initialize 'first' and 'second' to the maximum possible integer value
        
        for(int i = 0; i < nums.size(); i++) 
        {
            int num = nums[i];
            
            // If 'num' is smaller than or equal to 'first', update 'first'
            if(num <= first) 
            {
                first = num;
            }

            // If 'num' is greater than 'first' but smaller than or equal to 'second', update 'second'
            else if(num <= second) 
            {
                second = num;
            }

            // If 'num' is greater than both 'first' and 'second', we found an increasing triplet
            else 
            {
                return true; // Triplet found, return true
            }
        }
        return false;  // No increasing triplet found, return false
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,1,5,0,4,6};
    
    bool result = sol.increasingTriplet(nums);
    cout << (result ? "true" : "false") << endl;  // Output the result as "true" or "false"
}

// Time Complexity: O(n)  --> We only traverse the list once
// Space Complexity: O(1)  --> No extra space used apart from the variables 'first' and 'second'
