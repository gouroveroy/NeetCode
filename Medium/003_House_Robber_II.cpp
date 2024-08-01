#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        return max(nums[0], max(dp(nums, 0, nums.size() - 1), dp(nums, 1, nums.size())));
    }

    int dp(vector<int> &nums, int start, int end)
    {
        int rob1 = 0, rob2 = 0;
        for (int i = start; i < end; i++)
        {
            int temp = max(rob1 + nums[i], rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;
    }
};

int main()
{
    vector<int> nums = {3, 4, 3};
    Solution obj;
    cout << obj.rob(nums) << endl;
    return 0;
}
