// https://leetcode.com/problems/two-sum
<<<<<<<<<<<<<<  ✨ Codeium Command 🌟  >>>>>>>>>>>>>>>>

/*

This is a solution to the LeetCode problem "Two Sum" where we need to find two elements in an array that add up to a given target.

The idea is to store the elements in a hash map and then to iterate through the array and check if the current element is present in the hash map. 
If it is then return the indices of those two elements.

Example: Given nums = [2, 7, 11, 15], target = 9

The output will be [0, 1] because nums[0] + nums[1] = 2 + 7 = 9

The flow of the program is as follows:

- Create an empty vector to store the indices of the two elements
- Iterate through the array and for each element check if it is present in the hash map
- If it is then return the indices of the two elements
- If it is not then insert the element in the hash map along with its index

Time complexity: O(n)
Space complexity: O(n)

*/

class Solution {
public:

    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int, int> map;
        vector<int> indices;
        for (int i = 0; i < a.size(); ++i) {
            int match = target - a[i];
            if (map.find(match) != map.end()) {
                indices.push_back(map[match]);
                indices.push_back(i);
                return indices;  
            }
            map[a[i]] = i;  
        }
        return indices;  
    }
};

/*

Brute (Naive) approach:

The idea is to use two nested loops to check all the possible combinations of elements in the array and return the indices of the two elements that add up to the target.

Example: Given nums = [2, 7, 11, 15], target = 9

The output will be [0, 1] because nums[0] + nums[1] = 2 + 7 = 9

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
    vector<int> twoSum(vector<int>& a, int target) {
        for (int i = 0; i < a.size(); ++i) {
            for (int j = i + 1; j < a.size(); ++j) {
                if (a[i] + a[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

/*

Better approach:

The idea is to use a hash map to store the elements in the array as keys and their indices as values. Then to iterate through the array and check if the current element is present in the hash map. If it is then return the indices of the two elements. If it is not then insert the element in the hash map along with its index.

Example: Given nums = [2, 7, 11, 15], target = 9

The output will be [0, 1] because nums[0] + nums[1] = 2 + 7 = 9

The flow of the program is as follows:

- Create an empty hash map
- Iterate through the array and for each element check if it is present in the hash map
- If it is then return the indices of the two elements
- If it is not then insert the element in the hash map along with its index

Time complexity: O(n)
Space complexity: O(n)

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < a.size(); ++i) {
            int match = target - a[i];
            if (map.find(match) != map.end()) {
                return {map[match], i};
            }
            map[a[i]] = i;
        }
        return {};
    }
};

/*

Optimal approach:

The idea is to use a hash map to store the elements in the array as keys and their indices as values. Then to iterate through the array and check if the current element is present in the hash map. If it is then return the indices of the two elements. If it is not then insert the element in the hash map along with its index.

Example: Given nums = [2, 7, 11, 15], target = 9

The output will be [0, 1] because nums[0] + nums[1] = 2 + 7 = 9

The flow of the program is as follows:

- Create an empty hash map
- Iterate through the array and for each element check if it is present in the hash map
- If it is then return the indices of the two elements
- If it is not then insert the element in the hash map along with its index

Time complexity: O(n)
Space complexity: O(n)

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < a.size(); ++i) {
            int match = target - a[i];
            if (map.find(match) != map.end()) {
                return {map[match], i};
            }
            map[a[i]] = i;
        }
        return {};
    }
};
<<<<<<<  697f6fd5-fa61-445b-9074-b7969b397698  >>>>>>>

