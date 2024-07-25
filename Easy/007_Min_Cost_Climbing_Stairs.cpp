#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<int> dp;
    vector<int> c;

public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        c = cost;
        int n = cost.size();
        dp.resize(n + 1, -1);
        return recursion(n);
    }

    int recursion(int n)
    {
        if (dp[n] != -1)
        {
            return dp[n];
        }
        if (n < 2)
        {
            return 0;
        }
        return dp[n] = min(recursion(n - 1) + c[n - 1], recursion(n - 2) + c[n - 2]);
    }
};

int main()
{
    vector<int> cost = {1, 2, 1, 2, 1, 1, 1};
    Solution obj;
    cout << obj.minCostClimbingStairs(cost) << endl;
    return 0;
}
