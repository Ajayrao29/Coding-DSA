// LEETCODE LINK : https://leetcode.com/problems/find-greatest-common-divisor-of-array
// GFG LINK      : https://www.geeksforgeeks.org/program-to-find-gcd-or-hcf-of-two-numbers

//My Code :
 
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


