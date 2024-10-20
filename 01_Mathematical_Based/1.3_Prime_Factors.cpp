//LEETCODE PROBLEM LINK : https://leetcode.com/problems/distinct-prime-factors-of-product-of-array
//GFG LINK : https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number

//Approach :
//Step 1: Create a function getPrimeFactors() which takes an integer num and a set of primes as input.
//Prime factors finding start
//Step 2: Inside the function, first extract all the factors of 2 from num (if any) and insert them into the set of primes.
//Step 3: Iterate from 3 to sqrt(num) and check if i is a factor of num. If it is, then extract all the factors of i from num and insert them into the set of primes.
//Step 4: If num is greater than 2, then insert it into the set of primes (as it is a prime number itself).
//Prime factors finding end
//Step 5: Call the getPrimeFactors() function for each element in the given array and return the size of the set of primes.

class Solution {
public:
    void getPrimeFactors(int num, unordered_set<int>& primes) {
    //finding prime factors
        while (num % 2 == 0) {
            primes.insert(2);
            num /= 2;
        }
        for (int i = 3; i <= sqrt(num); i += 2) {
            while (num % i == 0) {
                primes.insert(i);
                num /= i;
            }
        }
        if (num > 2) {
            primes.insert(num);
        }
    //end of prime factors finding
    }
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> primes;
        for (int num : nums) {
            getPrimeFactors(num, primes);
        }
        return primes.size();
    }
};

//Time Complexity :O(sqrt(n)logn) ,n is the maximum number in the array
//Reason :We are using nested while loop , the outer loop runs for sqrt(n) and the inner while loop runs for log(n) times
//Space Complexity :O(n) 
//Reason :The space complexity is O(n) because in the worst case we might have to store all the distinct prime factors in the set.











