class Solution {
    public int maxProfit(int[] prices) {
        int min_buying_price = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.length; i++) {
            max_profit = Math.max((prices[i] - min_buying_price), max_profit);

            min_buying_price = Math.min(prices[i], min_buying_price);

        }
        return max_profit;
    }
}