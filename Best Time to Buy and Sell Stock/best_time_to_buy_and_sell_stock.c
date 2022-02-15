int maxProfit(int* prices, int pricesSize)
{
    int maxDiff = 0;
    int minPrice = prices[0];

    for (int i = 0; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
            minPrice = prices[i];
        else if (prices[i] - minPrice > maxDiff)
            maxDiff = prices[i] - minPrice;
    }
    return (maxDiff);
}
