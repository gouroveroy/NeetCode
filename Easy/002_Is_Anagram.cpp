#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

int main()
{
    string s = "racecar", t = "carrace";
    Solution obj;
    cout << obj.isAnagram(s, t) << endl;
    return 0;
}
