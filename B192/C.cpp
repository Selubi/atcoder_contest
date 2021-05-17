#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
 
string g1(string N){
    sort(N.begin(),N.end(),greater<char>());
    return N;
}
string g2(string N){
    sort(N.begin(),N.end());
    return N;
}
int main()
{
    string N;cin>>N;
    int K;cin>>K;
    // cout<<g1(N)<<" "<<g2(N);
    ll ans=stoll(N);
    rep(i,K){
        ans=stoll(g1(to_string(ans)))-stoll(g2(to_string(ans)));
    }
    cout<<ans;
}