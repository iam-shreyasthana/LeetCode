/*
#121
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m1 = prices[0];
        int result = 0;
        
        for(int i = 1; i < prices.size(); i++){
            result = max(result,prices[i] - m1);
            m1 = min(prices[i], m1);
        }
        
        return result;
    }
};