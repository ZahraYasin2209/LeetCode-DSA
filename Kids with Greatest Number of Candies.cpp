// LeetCode Problem: Kids With the Greatest Number of Candies
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Step 1: Find the maximum number of candies any kid currently has
        int maxCandy = *max_element(candies.begin(), candies.end());

        // Step 2: Create a result vector to store true/false for each kid
        vector<bool> result;

        // Step 3: Loop through each kid's candies
        for (int i = 0; i < candies.size(); i++) {
            // Step 4: Check if the current kid's candies + extraCandies is greater than or equal to maxCandy
            if (candies[i] + extraCandies >= maxCandy) {
                result.push_back(true); // Kid can have the greatest number of candies
            } else {
                result.push_back(false); // Kid cannot reach the max even after getting extraCandies
            }
        }

        // Step 5: Return the final result vector
        return result;
    }
};

int main() {
    // Sample input
    vector<int> candies = {4, 2, 1, 1, 2};
    int extraCandies = 1;

    Solution sol;
    vector<bool> result = sol.kidsWithCandies(candies, extraCandies);

    // Output the result
    cout << "Result: ";
    for (int i = 0; i < result.size(); i++) {
        if (result[i]) {
            cout << "true ";
        } else {
            cout << "false ";
        }
    }
    cout << endl;

    return 0;
}


// Time Complexity: O(n)
// Space Complexity: O(n)