// https://leetcode.com/problems/two-sum/
// Two Sum

#include <iostream>
#include <vector>
using namespace std;

// Brute-Force Approach using nested loop

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; // return the indices
            }
        }
    }

    return {}; // No valid pair found (though the problem guarantees one)
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> result = twoSum(nums, target);
    cout << "Indices: " << result[0] << " and " << result[1] << endl;

    return 0;
}

// Time Complexity: O(n²)
