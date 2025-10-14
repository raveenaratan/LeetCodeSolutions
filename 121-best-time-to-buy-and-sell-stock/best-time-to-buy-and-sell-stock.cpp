#include<iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n=prices.size();
     int max_profit=0;
     int max_suffix=0;
     for(int i=n-1;i>-1;i--)
    {
        max_suffix=max(max_suffix,prices[i]);
        max_profit=max(max_profit,max_suffix-prices[i]);
    }   
    return max_profit;
    
    }
    int main()
    {
        return 0;
    }
};