// Rotate Array
// https://leetcode.com/problems/rotate-array/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;  // in case k > n

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    vector<int> nums = {10, 20, 30, 40, 50, 60};
    int k = 2;

    rotate(nums, k);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
// Time Complexity: O(n)