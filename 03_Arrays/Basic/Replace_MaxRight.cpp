//leetcode link : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side
//GFG LINK : https://www.geeksforgeeks.org/leaders-in-an-array

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
