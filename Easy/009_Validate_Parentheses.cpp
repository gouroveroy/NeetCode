#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        // stack<char> st;
        // for (char c : s)
        // {
        //     if (c == '(' || c == '{' || c == '[')
        //         st.push(c);
        //     else
        //     {
        //         if (st.empty())
        //             return false;
        //         if (c == ')' && st.top() != '(')
        //             return false;
        //         if (c == '}' && st.top() != '{')
        //             return false;
        //         if (c == ']' && st.top() != '[')
        //             return false;
        //         st.pop();
        //     }
        // }
        // return st.empty();

        stack<char> st;
        unordered_map<char, char> open = {{'(', 'o'},
                                          {'{', 'o'},
                                          {'[', 'o'}};
        unordered_map<char, char> close = {{')', 'c'},
                                           {'}', 'c'},
                                           {']', 'c'}};
        unordered_map<char, char> bracket = {{'{', '}'},
                                             {'[', ']'},
                                             {'(', ')'}};
        for (char c : s)
        {
            if (open.find(c) != open.end())
                st.push(c);
            else if (close.find(c) != close.end())
            {
                if (st.empty())
                    return false;
                if (bracket[st.top()] != c)
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

int main()
{
    string s = "([{}])";
    Solution obj;
    cout << obj.isValid(s) << endl;
    return 0;
}
