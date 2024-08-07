#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy = 0, sell = 1;
        int profit = 0;
        while (sell < prices.size())
        {
            if (prices[sell] - prices[buy] < 0)
            {
                buy = sell++;
                continue;
            }
            profit = max(profit, prices[sell] - prices[buy]);
            sell++;
        }
        return profit;
    }
};

int main()
{
    vector<int> prices = {2, 1, 2, 1, 0, 1, 2};
    Solution obj;
    cout << obj.maxProfit(prices) << endl;
    return 0;
}
