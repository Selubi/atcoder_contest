#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < s.length(); i++)
    {
        if ((i + 1) % 2 == 1)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                continue;
            flag = false;
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                continue;
            flag = false;
        }
    }
    if(flag){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}