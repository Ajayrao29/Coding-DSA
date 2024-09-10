//https://leetcode.com/problems/sort-colors/  

/*
Brute (Naive) approach:

The idea is to use three nested loops to sort the array. The outer loop is to iterate through the array and for each iteration the middle loop is to find the smallest element in the array and the inner loop is to swap the smallest element with the current element.

Example: Given nums = [2, 0, 2, 1, 1, 0]

The output will be [0, 0, 1, 1, 2, 2]

The flow of the program is as follows:

- Iterate through the array using three nested loops
- For each iteration find the smallest element in the array
- Swap the smallest element with the current element
- Continue to the next iteration

Time complexity: O(n^3)
Space complexity: O(1)

*/

class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
        for (int i = 0; i < n; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (a[j] < a[minIndex]) {
                    minIndex = j;
                }
        for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j],a[j+1]);
            }
            swap(a[i], a[minIndex]);
        }
    }
    }
};

/*

Better approach:

The idea is to use a hash map to store the count of each element in the array. Then to iterate through the array and replace each element with the count of the element from the hash map. Finally to return the sorted array.

Example: Given nums = [2, 0, 2, 1, 1, 0]

The output will be [0, 0, 1, 1, 2, 2]

The flow of the program is as follows:

- Create an empty hash map
- Iterate through the array and store the count of each element in the hash map
- Iterate through the array and replace each element with the count of the element from the hash map
- Return the sorted array

Time complexity: O(n)
Space complexity: O(n)

*/

class Solution {
public:
    void sortColors(vector<int>& a) {
        unordered_map<int, int> map;
        for (int i = 0; i < a.size(); ++i) {
            map[a[i]]++;
        }
        int i = 0;
        for (int j = 0; j < 3; ++j) {
            while (map[j] > 0) {
                a[i++] = j;
                map[j]--;
            }
        }
    }
};

/*

Optimal approach:

The idea is to use three pointers to sort the array. The first pointer is to keep track of the position of the 0s, the second pointer is to keep track of the position of the 1s and the third pointer is to keep track of the position of the 2s. Then to iterate through the array and swap the elements according to the pointers.

Example: Given nums = [2, 0, 2, 1, 1, 0]

The output will be [0, 0, 1, 1, 2, 2]

The flow of the program is as follows:

- Initialize three pointers
- Iterate through the array and swap the elements according to the pointers
- Return the sorted array

Time complexity: O(n)
Space complexity: O(1)

*/

class Solution {
public:
    void sortColors(vector<int>& a) {
        int low = 0, mid = 0, high = a.size() - 1;
        while (mid <= high) {
            if (a[mid] == 0) {
                swap(a[low], a[mid]);
                low++;
                mid++;
            }
            else if (a[mid] == 1) {
                mid++;
            }
            else {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
};
