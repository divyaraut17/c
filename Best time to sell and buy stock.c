int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) {
        return 0;  // No prices available, no profit possible
    }

    int minPrice = prices[0];  // Start with the first price as the minimum price
    int maxProfit = 0;  // Initial profit is 0
    
    // Traverse through the prices
    for (int i = 1; i < pricesSize; i++) {
        // Update the minimum price encountered so far
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        
        // Calculate the potential profit if we sell on the current day
        int profit = prices[i] - minPrice;
        
        // Update maxProfit if the current profit is greater
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;

}
