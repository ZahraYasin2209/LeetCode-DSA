// https://leetcode.com/problems/two-sum/
// Two Sum

#include <iostream>
#include <vector>
using namespace std;

// Two-Pointer Approach (Array Must be Sorted)

vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0; 
    int right = nums.size() - 1;

    while(left < right)
    {
        int sum = nums[left] + nums[right];
        if(sum == target)
        {
            return {left, right};
        }
        else if(sum < target)
        {
            left++;
        }
        else{
            right--;
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15}; // Must be sorted
    int target = 9;

    vector<int> result = twoSum(nums, target);
    if (!result.empty())
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    else
        cout << "No pair found.\n";

    return 0;
}

// Time Complexity: O(n)