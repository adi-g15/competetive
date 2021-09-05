// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/

class Solution {
public:
    // basically find all increasing subarrays
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for(auto i=0; i<prices.size()-1; ++i) {
            if( prices[i+1] > prices[i] ) {
                profit += prices[i+1] - prices[i];  // assuming we bought at ith day, sell at i+1th
            }
        }
        
        return profit;
    }
};
