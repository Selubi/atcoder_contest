#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (long long i = (long long)j; i < (long long)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;

signed main()
{
    ll N,A,B;cin>>N>>A>>B;
    ll P,Q,R,S;cin>>P>>Q>>R>>S;
    rep(i,P,Q+1){
        rep(j,R,S+1){
            if(abs(i-A)==abs(j-B)){
                putchar('#');
            }
            else{
                putchar('.');
            }
        }
        putchar('\n');
    }
}

///97542