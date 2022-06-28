//Leetcode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
        int maxProfit(vector<int>& prices) {
        int minValue=prices[0];
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            minValue=min(minValue,prices[i]);
            int profit=prices[i]-minValue;
            maxProfit=max(maxProfit,profit);
        }
        return maxProfit;
    }
};