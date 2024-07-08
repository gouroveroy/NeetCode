#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }

                else if (nums[i] + nums[j] == target)
                {
                    return vector<int>{i, j};
                }
            }
        }
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {4, 5, 6};
    vector<int> result = obj.twoSum(nums, 10);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
