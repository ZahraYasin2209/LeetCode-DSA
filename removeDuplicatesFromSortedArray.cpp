// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.empty()) {
            return 0;
        }
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    int newLength = sol.removeDuplicates(nums);

    cout << "After removing duplicates, the array is: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    // After removing duplicates, the array is: 1 2 3 4 5 

    cout << "\nNew length: " << newLength << endl;
    // New length: 5

    return 0;
}

// Time Complexity: O(n)