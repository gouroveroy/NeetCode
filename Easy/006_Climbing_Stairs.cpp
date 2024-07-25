#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<int> dp;

public:
    int climbStairs(int n)
    {
        dp.resize(n + 1, -1);
        return recursion(n);
    }

    int recursion(int n)
    {
        if (dp[n] != -1)
        {
            return dp[n];
        }
        if (n == 1)
        {
            return 1;
        }
        else if (n == 2)
        {
            return 2;
        }
        return dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.climbStairs(n) << endl;
    return 0;
}
