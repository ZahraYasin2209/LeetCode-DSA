// 3 Sum
// https://leetcode.com/problems/3sum/submissions/1657759135/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());  // Sort to use two pointers and skip duplicates

        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])  // Skip duplicates for i
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) 
            {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicates for left pointer
                    while (left < right && nums[left] == nums[left + 1]) left++;

                    // Skip duplicates for right pointer
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } 
                else if (sum < 0) 
                {
                    left++;
                } 
                else 
                {
                    right--;
                }
            }
        }

        return result;
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> triplets = sol.threeSum(nums);

    cout << "Triplets that sum to zero:\n";
    for (const auto& triplet : triplets) 
    {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]\n";
        // Triplets that sum to zero: [-1, -1, 2]  [-1, 0, 1]
    }
}

// Time Complexity: O(n²)