// Product of Array Except Self
// Problem Link: https://leetcode.com/problems/product-of-array-except-self/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Method #1: Prefix and Postfix Arrays
    // Time Complexity: O(n)
    // Space Complexity: O(n) - due to extra prefix and postfix arrays
    /*
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        
        // Initialize result with 1s
        vector<int> result(n, 1);

        // Compute prefix product for each element
        vector<int> prefix(n, 1);
        for (int i = 1; i < n; ++i) 
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // Compute postfix product for each element
        vector<int> postfix(n, 1);
        for (int i = n - 2; i >= 0; --i) 
        {
            postfix[i] = postfix[i + 1] * nums[i + 1];
        }

        // Multiply prefix and postfix products to get the final result
        for (int i = 0; i < n; ++i) 
        {
            result[i] = prefix[i] * postfix[i];
        }

        return result;
    }
    */


    // Method #2: Optimized Space Approach
    // Time Complexity: O(n)
    // Space Complexity: O(1) extra (excluding the output array)
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> result(n, 1);                   // Initialize result with prefix products

        // Compute prefix product and store in result
        for (int i = 1; i < n; ++i) 
        {
            result[i] = result[i - 1] * nums[i - 1];
        }

        // Compute postfix product on the fly and multiply into result
        int postfix = 1;
        for (int i = n - 2; i >= 0; --i) 
        {
            postfix *= nums[i + 1];
            result[i] *= postfix;
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};

    // Get the product array
    vector<int> result = sol.productExceptSelf(nums);

    // Output the result
    for (int num : result) {
        cout << num << " ";         // 24  12  8  6
    }
    cout << endl;

    return 0;
}
