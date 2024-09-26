// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

/*

My approach:

The idea is to keep track of the minimum element in the array (which would be the buying price) and the maximum profit that can be achieved by selling the stock at the current price and subtracting the minimum element.

Example: Given prices = [7,1,5,3,6,4]

The output will be 5 because the maximum profit that can be achieved by buying and selling a stock once is 5 (6 - 1 = 5)

The flow of the program is as follows:

- Iterate through the array and for each element check if it is the minimum element
- If it is then update the minimum element
- Calculate the maximum profit by subtracting the minimum element from the current element
- Return the maximum profit

Time complexity: O(n)
Space complexity: O(1)

Is this approach the most optimal one : yes
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0)
            return 0;
        int mini=prices[0];
        int maxi=0;
        for(int i=1;i<n;i++){
            mini=min(mini,prices[i]);
            int profit =prices[i]-mini;
            maxi=max(maxi,profit);
        }
        return maxi;
    }
};

/*

Brute (Naive) approach:

The idea is to use two nested loops to check all the possible combinations of elements in the array and return the maximum profit that can be achieved by buying and selling a stock once.

Example: Given prices = [7,1,5,3,6,4]

The output will be 5 because the maximum profit that can be achieved by buying and selling a stock once is 5 (6 - 1 = 5)

The flow of the program is as follows:

- Iterate through the array using two nested loops
- For each iteration check if the current element and the element at the next index add up to the target
- If they do then return the maximum profit that can be achieved by buying and selling a stock once
- If they don't then continue to the next iteration

Time complexity: O(n^2)
Space complexity: O(1)

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                int profit =prices[j]-prices[i];
                maxProfit=max(maxProfit,profit);
            }
        }
        return maxProfit;
    }
};

/*

Better approach:

The idea is to use a hash map to store the elements in the array as keys and their indices as values. Then to iterate through the array and check if the current element is present in the hash map. If it is then update the maximum profit. If it is not then insert the element in the hash map along with its index.

Example: Given prices = [7,1,5,3,6,4]

The output will be 5 because the maximum profit that can be achieved by buying and selling a stock once is 5 (6 - 1 = 5)

The flow of the program is as follows:

- Create an empty hash map
- Iterate through the array and for each element check if it is present in the hash map
- If it is then update the maximum profit
- If it is not then insert the element in the hash map along with its index

Time complexity: O(n)
Space complexity: O(n)

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0)
            return 0;
        int mini=prices[0];
        int maxi=0;
        unordered_map<int,int> map;
        for(int i=1;i<n;i++){
            mini=min(mini,prices[i]);
            int profit =prices[i]-mini;
            maxi=max(maxi,profit);
            map[prices[i]]=i;
        }
        return maxi;
    }
};

/*

Optimal approach:

The idea is to use a hash map to store the elements in the array as keys and their indices as values. Then to iterate through the array and check if the current element is present in the hash map. If it is then update the maximum profit. If it is not then insert the element in the hash map along with its index.

Example: Given prices = [7,1,5,3,6,4]

The output will be 5 because the maximum profit that can be achieved by buying and selling a stock once is 5 (6 - 1 = 5)

The flow of the program is as follows:

- Create an empty hash map
- Iterate through the array and for each element check if it is present in the hash map
- If it is then update the maximum profit
- If it is not then insert the element in the hash map along with its index

Time complexity: O(n)
Space complexity: O(n)

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0)
            return 0;
        int mini=prices[0];
        int maxi=0;
        unordered_map<int,int> map;
        for(int i=1;i<n;i++){
            mini=min(mini,prices[i]);
            int profit =prices[i]-mini;
            maxi=max(maxi,profit);
            map[prices[i]]=i;
        }
        return maxi;
    }
};
/******  4ddcace7-793a-4a7b-be5a-3c3de37916ea  *******/