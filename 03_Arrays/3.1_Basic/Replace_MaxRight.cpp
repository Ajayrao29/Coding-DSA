//leetcode link : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side
//GFG LINK : https://www.geeksforgeeks.org/leaders-in-an-array

//Approach:
        //Step 1: Initialize the size of given array
        //Step 2: Create another vector to store the result
        //Step 3: Initialize the maxRight variable to -1
        //Step 4: Iterate through the array from right to left
        //Step 5: For each element, store the maxRight in the result array
        //Step 6: Update the maxRight with maximum of current element and maxRight

class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int n = a.size();
        vector<int> b(n);
        int maxRight = -1;

        for (int i = n - 1; i >= 0; i--) {
            int current = a[i];
            b[i] = maxRight;
            maxRight = max(maxRight, current);
        }
        
        return b;
    }
};


//Time Complexity : O(n) as we are iterating through the array 
//Space Complexity : O(n)
//We are using another vector to store the result and we are also using one extra variable maxRight, so the space complexity is O(n).

