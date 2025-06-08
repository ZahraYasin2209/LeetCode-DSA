// Set Mismatch
// https://leetcode.com/problems/set-mismatch/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n = nums.size();

        vector<int> freq(n + 1, 0);  // 1-indexed frequency array
        int duplicate = -1;
        int actualSum = 0;

        for (int i = 0; i < n; i++) 
        {
            freq[nums[i]]++;

            if (freq[nums[i]] == 2) 
            {
                duplicate = nums[i];
            }
            actualSum += nums[i];
        }

        int expectedSum = n * (n + 1) / 2;
        int missing = expectedSum - (actualSum - duplicate);

        return {duplicate, missing};
    }
};


int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 2, 4};
    vector<int> result1 = sol.findErrorNums(nums1);
    cout << "Output: [" << result1[0] << ", " << result1[1] << "]" << endl;    // Output: [2, 3]

    vector<int> nums2 = {1, 1};
    vector<int> result2 = sol.findErrorNums(nums2);
    cout << "Output: [" << result2[0] << ", " << result2[1] << "]" << endl;    // Output: [1, 2]

    return 0;
}

// Time Complexity: O(n)