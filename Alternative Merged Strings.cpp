//https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

#include "iostream"
using namespace std;

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            int n1 = word1.size();        //length of first string
            int n2 = word2.size();        //length of second string
            string mergedString = ""; 
            int maxLen = max(n1, n2);

            for(int i = 0; i < maxLen; i++)
            {
                if(i < n1)
                {
                    mergedString += word1[i];
                }
                if(i < n2){
                    mergedString += word2[i];
                }
            }
            return mergedString;     
            
        }
};

int main(){
    Solution sol;
    string word1 = "abc";
    string word2 = "uvwxyz";

    string merged = sol.mergeAlternately(word1, word2);
    cout << "MERGED STRING: " << merged << endl;
    return 0;
}

//Complxity: O(n)