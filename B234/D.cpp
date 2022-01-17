#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<int> P(N, 0);
    rep(i, 0, N)
    {
        cin >> P[i];
    }
    set<int> s;
    rep(i,0,K){
        s.insert(P[i]);
    }
    int now=*s.begin();
    cout<<now<<endl;
    rep(i,K,N){
        s.insert(P[i]);
        if(P[i]>now){
            now=*s.upper_bound(now);
        }
        cout<<now<<endl;
    }
}