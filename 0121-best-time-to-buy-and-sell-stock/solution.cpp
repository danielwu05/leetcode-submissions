class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = prices[0];

        if (prices.size() == 1) {
            return 0;
        }

        for (int i = 1; i < prices.size(); i++) {
            min_price = min(min_price, prices[i]);

            int current_profit = prices[i] - min_price;

            max_profit = max(max_profit, current_profit);
        }

        return max_profit;
        
    }
};
