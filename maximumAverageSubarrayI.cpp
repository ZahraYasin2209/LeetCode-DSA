// Maximum Average Subarray I
// https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0;

        // Calculate the sum of the first window of size k
        for(int i = 0; i < k; i++)
        {
            sum += nums[i];
        }

        double maxSum = sum;
        // Slide the window across the array
        for(int i = k; i < nums.size(); i++)
        {
            sum += nums[i] - nums[i - k];           // Add new element and remove the oldest one
            maxSum = max(sum, maxSum);
        }

        // Return the maximum average
        return maxSum / k;
    }

};

int main() {
    Solution sol;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double result = sol.findMaxAverage(nums, k);
    cout << "Maximum average of a subarray of size " << k << " is: " << result << endl;
    // Maximum average of a subarray of size 4 is: 12.75

    return 0;
}


// Time Complexity: O(n)  
// Space Complexity: O(1)
