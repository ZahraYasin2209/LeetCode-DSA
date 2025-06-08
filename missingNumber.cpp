// Missing Number
// https://leetcode.com/problems/missing-number/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = n * (n + 1) / 2;  // Formula to calculate sum from 0 to n
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        return totalSum - sum;  // The missing number
    }
};


int main() {
    Solution sol;
    vector<int> nums = {0, 1, 2, 4, 5};  // Missing number is 3

    cout << "Original array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    int missing = sol.missingNumber(nums);

    cout << "Missing number is: " << missing << endl;   // Missing number is: 3

    return 0;
}
// Time Complexity: O(n)