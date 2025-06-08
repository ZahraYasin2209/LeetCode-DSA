// Missing Number In Arithmetic Progression
// You are given a sorted array of size n-1 that represents an Arithmetic Progression (AP).
// Exactly one term is missing. Find the missing term.

#include <iostream>
#include <vector>
using namespace std;

// In Arithmetic Progression (AP): a, a + d, a + 2d, a + 3d, ..., a + (n-1)d
// d is the fixed gap between each element.

int findMissingAP(const vector<int>& arr) 
{
    int n = arr.size() + 1; // Total elements if none were missing
    int d = (arr.back() - arr[0]) / (n - 1); // Common difference

    int low = 0, high = arr.size() - 1;

    while (low <= high) 
    {
        int mid = (low + high) / 2;
        int expected = arr[0] + mid * d;

        if (arr[mid] == expected) 
        {
            low = mid + 1;          // missing number is on right side
        } 
        else 
        {
            high = mid - 1;         // missing number is on left side
        }
    }

    // Missing number will be at arr[0] + low * d
    return arr[0] + low * d;
}

int main() 
{
    vector<int> arr = {2, 4, 6, 8, 12};   // missing 10
    cout << "Missing number is: " << findMissingAP(arr) << endl;
    return 0;
}

// Time Complexity = O(log n)
