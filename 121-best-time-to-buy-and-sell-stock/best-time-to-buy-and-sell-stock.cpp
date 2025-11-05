class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buying_price = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            max_profit = std::max(max_profit, prices[i]- min_buying_price);
            min_buying_price = std::min(min_buying_price, prices[i]);
        }
        return max_profit;
    }
};