//GFG LINK :https://www.geeksforgeeks.org/lcm-of-given-array-elements
//GFG PROBLEM LINK:https://www.geeksforgeeks.org/problems/lcm-of-given-array-elements3919/1

//Approach :
//1.The approach is to use the formula of lcm of a and b is a*b/gcd(a,b)
//2. We will use the function gcd() and lcm()
//then 
 // Step 1: Initialize the answer with the first element of the array
 // Step 2: Iterate over the array and compute the lcm of the current element with the previous answer (FOLLOW TILL THE END OF THE ARRAY AND UPDATE THE ANSWER)
 // Step 4: Return the final answer modulo 1000000007 to avoid overflow

long long gcd(long long a , long long b){
            if(b==0)
               return a;
            return gcd(b,a%b);
 }

 long long lcm(long long a,long long b){
     return ((a*b)/(gcd(a,b)))%1000000007; // to avoid overflow we are using mod 1000000007
 }
class Solution {
  public:
    int lcmOfArray(int n , int a[]) {
        long long ans=a[0];
        for(int i=1;i<n;i++){
            ans=lcm(ans,a[i]); //
        }
        return ans%1000000007;
    }
};

//Time Complexity :O(nlog Amax) ,A max is largest element in array
//Reason :The complexity is O(NlogAmax) because for each of the N elements, we compute the GCD (which takes O(logA max)) to calculate the LCM progressively which has a complexity of O(log(min(a,b)))
//Space Complexity :O(1)
//Reason : We are using a constant amount of space to store the variables.

//refer GFG link for other approaches
