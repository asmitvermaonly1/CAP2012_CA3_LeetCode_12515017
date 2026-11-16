// LeetCode 121: Best Time to Buy and Sell Stock (Easy)
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice = prices[0];
        int profit = 0;
        
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            
            else if(prices[i] - minPrice > profit)
            {
                profit = prices[i] - minPrice;
            }
        }
        
        return profit;
    }
};
