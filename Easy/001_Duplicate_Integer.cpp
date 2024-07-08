#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        int before = nums.size();
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), it));
        int after = nums.size();
        if (before == after)
            return false;
        return true;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 3, 4};
    cout << obj.hasDuplicate(nums) << endl;
    return 0;
}
