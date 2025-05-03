// Max Number of K-Sum Pairs
// https://leetcode.com/problems/max-number-of-k-sum-pairs/submissions/1618569983/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int maxOperations(vector<int>& nums, int k) 
        {
            sort(nums.begin(), nums.end());          // Sort the elements in array
            
            int left = 0, right = nums.size() - 1;

            int operations = 0;

            while(left < right)
            {
                int sum = nums[left] + nums[right];   // start sum the elements from both ends
                if(sum == k)
                {
                    operations++;
                    left++;
                    right--;
                }
                else if(sum < k)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
            return operations;                       // returning number of operations to be performed
        }
};

int main() {
    Solution sol;
    vector<int> nums = {3,1,3,4,3};
    int k = 6;            
    
    int operations = sol.maxOperations(nums, k); 
    cout << "Operation: " << operations << endl;    // Operation: 1        
}

// Time Complexity: O(nlogn)  
// Space Complexity: O(1)
