#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(void)
{
    int Q;
    cin >> Q;
    int N = 1048576;
    map<int, pair<ll,int>> s;
    rep(i, 0, Q)
    {
        int t;
        cin >> t;
        ll x;
        cin >> x;
        int h = x % N;
        if (t == 1)
        {
            if (s.find(h) == s.end())
            {
                s[h] = pair<ll,int>(x,1);
            }
            else
            {
                s[(h+s[h].second) % N]=pair<ll,int>(x,1);
                for(int j=h;j!=(h+s[h].second) % N;){
                    s[j].second+=1;
                    j=(j+1)%N;
                }
            }
        }
        if (t == 2)
        {
            if (s.find(h) == s.end())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << s[h].first << endl;
            }
        }
    }
}