// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Best Time to Buy and Sell Stock

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = 0;

        for(int i = 0; i < prices.size(); i++) {
            int profit = prices[i] - buy;
            sell = max(sell, profit);
            buy = min(buy, prices[i]);
        }
        return sell;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution sol; // create object of Solution
    cout << "Max profit: " << sol.maxProfit(prices) << endl;
    return 0;
}

// Time Complexity: O(n)