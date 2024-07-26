#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<int> dp;
    vector<int> money;

public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        dp.resize(n + 1, -1);
        money = nums;
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return nums[0];
        }
        return dp[n] = max(recursion(n - 1) + money[n - 1], recursion(n - 2) + money[n - 2]);
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
        if (n == 2)
        {
            return money[0];
        }
        return dp[n] = max(recursion(n - 2) + money[n - 2], recursion(n - 3) + money[n - 3]);
    }
};

int main()
{
    vector<int> nums = {1, 1, 3, 3};
    Solution obj;
    cout << obj.rob(nums) << endl;
    return 0;
}
