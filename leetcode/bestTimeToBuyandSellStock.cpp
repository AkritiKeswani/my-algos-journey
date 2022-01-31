/* You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day 
\in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, 
return 0.*/


class Solution:
    def maxProfit(self, prices):
        #condition where array has to have at least two elements to actually be viable          for this question (to have profit)
        if len(prices) < 2:
            return 0 
        maxProfitSeen = 0
        minElementSeen = prices[0]
        for p in prices: 
            if p < minElementSeen: 
                minElementSeen = p 
            profitSellingOnCurrentDay = p - minElementSeen
            if profitSellingOnCurrentDay > maxProfitSeen:
                maxProfitSeen = profitSellingOnCurrentDay
        return maxProfitSeen
    
                
            
            
            