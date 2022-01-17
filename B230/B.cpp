#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    bool ans = true, flag = true;
    int countx = 0;
    string tmp = "";
    rep(i, 0, s.length())
    {
        if (flag)
        {
            if (s[i] != 'o'&&i<2)
            {
                continue;
            }
            else
            {
                if (i >= 2 && s[i]=='x')
                {
                    ans = false;
                    break;
                }
                else
                {
                    flag = false;
                    continue;
                }
            }
        }
        if (s[i] == 'x')
        {
            if (countx >= 2)
            {
                ans = false;
                break;
            }
            if (countx < 2)
            {
                countx++;
            }
        }
        else
        {
            if (countx != 2)
            {
                ans = false;
                break;
            }
            else
            {
                countx = 0;
                continue;
            }
        }
    }
    if (ans)
        cout << "Yes";
    else
        cout << "No";
}