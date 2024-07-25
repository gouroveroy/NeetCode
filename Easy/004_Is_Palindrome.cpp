#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.length() - 1;
        while(i <= j)
        {
            if(s[i] == ' ')
            {
                i++;
            }
            if(s[j] == ' ')
            {
                j--;
            }
            if(!isalnum(s[i]))
            {
                i++;
                continue;
            }
            if(!isalnum(s[j]))
            {
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

int main()
{
    string s;
    getline(std::cin, s);
    fflush;
    Solution obj;
    cout << obj.isPalindrome(s) << endl;
    return 0;
}
