// https://leetcode.com/problems/maximum-subarray/

        /* The idea is to use Kadane's algorithm to find the maximum sum of any subarray
        The flow of the program is as follows:
         - Initialize the maximum sum and current sum to zero
         - Iterate through the array and for each element add it to the current sum
         - If the current sum is greater than the maximum sum then update the maximum sum
         - If the current sum is less than zero then reset the current sum to zero
         - Return the maximum sum
         */
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n=a.size();
        int msum=INT_MIN;
        int csum=0;
        for(int i=0;i<n;i++){
            csum=max(a[i],csum+a[i]);
            msum=max(msum,csum);
        }
        return msum;
    }
};
         // Time complexity: O(n)
        // Space complexity: O(1)

/*

Brute (Naive) approach:

The idea is to use two nested loops to check all the possible subarrays in the array and return the maximum sum of any subarray.

Example: Given nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

The output will be 3 because the maximum sum of any subarray is 3 (4 - 1 + 2 + 1)

The flow of the program is as follows:

- Iterate through the array using two nested loops
- For each iteration check if the current element and the element at the next index add up to the target
- If they do then return the indices of the two elements
- If they don't then continue to the next iteration

Time complexity: O(n^2)
Space complexity: O(1)

*/

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxSum = INT_MIN;
        for (int i = 0; i < a.size(); ++i) {
            int currentSum = 0;
            for (int j = i; j < a.size(); ++j) {
                currentSum += a[j];
                maxSum = max(maxSum, currentSum);
            }
        int n=a.size();
        int msum=INT_MIN;
        int csum=0;
        for(int i=0;i<n;i++){
            csum=max(a[i],csum+a[i]);
            msum=max(msum,csum);
        }
        return maxSum;
        return msum;
    }
};

/*

Better approach:

The idea is to use a hash map to store the sum of all the subarrays and return the maximum sum of any subarray.

Example: Given nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

The output will be 3 because the maximum sum of any subarray is 3 (4 - 1 + 2 + 1)

The flow of the program is as follows:

- Create an empty hash map
- Iterate through the array and for each element check if it is present in the hash map
- If it is then return the maximum sum of any subarray
- If it is not then insert the element in the hash map along with its sum

Time complexity: O(n)
Space complexity: O(n)

*/

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        unordered_map<int, int> map;
        int maxSum = INT_MIN;
        int currentSum = 0;
        for (int i = 0; i < a.size(); ++i) {
            currentSum += a[i];
            if (map.find(currentSum) != map.end()) {
                maxSum = max(maxSum, map[currentSum]);
            } else {
                map[currentSum] = i;
            }
        }
        return maxSum;
    }
};

/*

Optimal approach:

The idea is to use Kadane's algorithm to find the maximum sum of any subarray.

Example: Given nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

The output will be 3 because the maximum sum of any subarray is 3 (4 - 1 + 2 + 1)

The flow of the program is as follows:

- Initialize the maximum sum and current sum to zero
- Iterate through the array and for each element add it to the current sum
- If the current sum is greater than the maximum sum then update the maximum sum
- If the current sum is less than zero then reset the current sum to zero
- Return the maximum sum

Time complexity: O(n)
Space complexity: O(1)

*/

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxSum = 0;
        int currentSum = 0;
        for (int i = 0; i < a.size(); ++i) {
            currentSum += a[i];
            maxSum = max(maxSum, currentSum);
            if (currentSum < 0) currentSum = 0;
        }
        return maxSum;
    }
};
