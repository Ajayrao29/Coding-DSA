//https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       return nums[n/2]; 
    }
};

/*
The flow of the program is as follows:

- Sort the array
- Return the element at the middle index (n/2) of the sorted array

Time complexity: O(nlogn)
Space complexity: O(1)

*/
/*

Problem: Majority Element

Given an array of size n, find the majority element. The majority element is the element that appears more than n/2 times.

/*
Brute (Naive) approach:

The idea is to use two nested loops to check all the possible combinations of elements in the array and return the element which is present more than n/2 times.

Example:

Input: [3, 3, 4, 2, 4, 4, 2, 4, 4]

Output: 4

The flow of the program is as follows:

- Iterate through the array using two nested loops
- For each iteration check if the current element is present more than n/2 times
- If it is then return the element
- If it is not then continue to the next iteration

Time complexity: O(n^2)
Space complexity: O(1)

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxCount = 0;
        int majorityElement = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int count = 0;
            for (int j = 0; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count > maxCount) {
                maxCount = count;
                majorityElement = nums[i];
            }
        }
        return majorityElement;
    }
};

/*

Better & also optimal approach:

The idea is to use a hash map to store the elements in the array as keys and their count as values. Then to iterate through the array and check if the current element is present in the hash map. If it is then increment the count of the element. If it is not then insert the element in the hash map with a count of 1.

Example:

Input: [3, 3, 4, 2, 4, 4, 2, 4, 4]

Output: 4

The flow of the program is as follows:

- Create an empty hash map
- Iterate through the array and for each element check if it is present in the hash map
- If it is then increment the count of the element
- If it is not then insert the element in the hash map with a count of 1
- Return the element with the highest count

Time complexity: O(n)
Space complexity: O(n)

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            if (map.find(nums[i]) != map.end()) {
                map[nums[i]]++;
            } else {
                map[nums[i]] = 1;
            }
        }
        int maxCount = 0;
        int majorityElement = 0;
        for (auto it = map.begin(); it != map.end(); ++it) {
            if (it->second > maxCount) {
                maxCount = it->second;
                majorityElement = it->first;
            }
        }
        return majorityElement;
    }
};

