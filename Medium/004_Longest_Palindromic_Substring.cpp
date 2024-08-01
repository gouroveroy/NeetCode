#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.length();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        int maxLength = INT_MIN;
        string palindrome = "";
        for (int diff = 0; diff < n; diff++)
        {
            for (int i = 0; i < n - diff; i++)
            {
                int j = i + diff;
                if (diff == 0)
                {
                    dp[i][j] = 1;
                }
                else if (diff == 1)
                {
                    if (s[i] == s[j])
                    {
                        dp[i][j] = 2;
                    }
                }
                else
                {
                    if (s[i] == s[j] && dp[i + 1][j - 1] > 0)
                    {
                        dp[i][j] = dp[i + 1][j - 1] + 2;
                    }
                }
                if (dp[i][j] > 0 && diff + 1 > maxLength)
                {
                    maxLength = diff + 1;
                    palindrome = s.substr(i, diff + 1);
                }
            }
        }
        return palindrome;
    }
};

int main()
{
    Solution obj;
    string s = "abbc";
    cout << obj.longestPalindrome(s) << endl;
    return 0;
}
