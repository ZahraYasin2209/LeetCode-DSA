// Container With Most Water
// https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int left = 0, right = height.size() - 1;
            int maxArea = 0;

            while(left < right)
            {
                int length = min(height[left], height[right]);
                int width = right - left;                          // width --> distance between both ends

                int currentArea = length * width;                  // Area for Rectangle = length * width
                maxArea = max(maxArea, currentArea);

                if(height[left] < height[right])
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
            return maxArea;
        }
};

int main() {
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};               
    
    int area = sol.maxArea(height);
    cout << "Maximum Area: " << area << endl;         // Maximum Area: 49
}

// Time Complexity: O(n)  
// Space Complexity: O(1)
