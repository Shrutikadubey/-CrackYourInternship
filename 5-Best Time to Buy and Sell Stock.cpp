//Problem : You are given an array prices where prices[i] is the price of a given stock on the ith day.You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Solution
// approach - compare each element with every other element and find the max difference in place solution keep track of min element and max difference
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=0;
        int minprice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            maxprof=max(maxprof,prices[i]-minprice);
        }
        return maxprof;
    }
};
