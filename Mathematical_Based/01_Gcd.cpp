// LEETCODE LINK : https://leetcode.com/problems/find-greatest-common-divisor-of-array
// GFG LINK      : https://www.geeksforgeeks.org/program-to-find-gcd-or-hcf-of-two-numbers

//My Code :

//Approach :
// 1. Take two variables maxi and mini
// 2. Traverse the array and update maxi and mini
// By using euclidean algorithm we can get the GCD (best approach - following iterative method) 
// 3.While loop runs till maxi is greater than 0 and mini is greater than 0 
// 4. If maxi is greater than mini then maxi=maxi%mini else then mini=mini%maxi
// 6. When while condition is false then move to next condition If maxi is 0 then return mini else return maxi 
 
class Solution {
public:
    int findGCD(vector<int>& nums) {
        // Complexity O(n) 
        // reason we are traversing the whole array to get the maximum and minimum value
        int n=nums.size();
        int maxi=nums[0];
        int mini=nums[0];
       for(int i=0;i<n;i++){
           if(nums[i]>maxi){
                  maxi=nums[i];
           }
           if(nums[i]<mini){
               mini=nums[i];
           }
       }
        // Complexity O(log(mini)) 
        // reason the while loop is running till the mini is greater than 0 and in each iteration we are reducing the value of mini or maxi by a factor of 2
        while(maxi>0 && mini>0){
            if(maxi>mini){
                maxi=maxi%mini;
            }else{
                mini=mini%maxi;
            }
        }
        if(maxi==0){
            return mini;
        }
         return maxi;        
    }
};

//refer GFG link for more approaches 

