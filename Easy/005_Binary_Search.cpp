#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        if (nums[left] == target)
        {
            return left;
        }
        else if (nums[right] == target)
        {
            return right;
        }
        while (left < right - 1)
        {
            int mid = (left + right) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                right = mid;
            }
            else
            {
                left = mid;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {-1, 0, 2, 4, 6, 8};
    int target = 4;
    Solution obj;
    cout << obj.search(nums, target) << endl;
    return 0;
}
