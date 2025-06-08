// Find the Duplicate Number
// https://leetcode.com/problems/find-the-duplicate-number/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0); // Frequency array

        for (int i = 0; i < n; i++) 
        {
            freq[nums[i]]++;
            
            if (freq[nums[i]] > 1) 
            {
                return nums[i]; // Found duplicate
            }
        }

        return -1; // Should never reach here
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 4, 2, 2};  // Example input

    int duplicate = sol.findDuplicate(nums);
    cout << "Duplicate number is: " << duplicate << endl;           // Duplicate number is: 2

    return 0;
}

// Time Complexity: O(n)