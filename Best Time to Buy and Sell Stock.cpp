class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;

        int min_price = prices[0];
        int profit = prices[1]- prices[0];
        for(int i =2; i< prices.size(); i++)
        {
            min_price = min(prices[i-1], min_price);
            profit = max(profit, prices[i]- min_price);
        }

        if(profit <0) return 0;

        return profit;

    }
};
