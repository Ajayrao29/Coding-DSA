//check whether array is sorted or not

bool isSorted(vector<int>&a){
int n=a.size();
for(int i=1;i<n;i++){
if(a[i-1]>a[i]){
return false;
}
else{
return false;
}
}
}
//Time Complexity: O(n)
//Space Complexity: O(1)

//Question 

//Leetcode Link : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated
//GFG Approaches Link : https://www.geeksforgeeks.org/program-check-array-sorted-not-iterative-recursive


//MY Approach:
//Step 1: Take the size of the given array
//Step 2: Initialize the count variable to 0
//Step 3: Iterate through the array and check if the current element is greater than the next element
//Step 4: If the condition is true, then increment the count by 1
//Step 5: If the count is greater than 1, then return false
//Step 6: If the count is 0 or 1, then return true

class Solution {
public:
    bool check(vector<int>& nums) {
      int n=nums.size();
      int c=0;
      for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){
            c++;
        }
      }
      if(nums[n-1]>nums[0]){
        c++;
      }
      return c<=1;
    }
};

//Time Complexity: The time complexity is O(n) because we are iterating through the array only once.
//Space Complexity: The space complexity is O(1) because we are using a constant amount of space to store the count of the rotations.



