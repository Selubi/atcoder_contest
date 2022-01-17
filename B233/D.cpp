#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(void)
{
    ll N,K;cin>>N>>K;
    vector<ll> X(N,0);
    vector<ll> X_sum(N,0);
    ll sum=0;
    ll count=0;
    rep(i,0,N){
        cin>>X[i];
        sum+=X[i];
        X_sum[i]=sum;
        if(sum==K)count++;
    }
    map<int,ll> G;
    rep(i,0,N){
        if(G.find(X_sum[i]) == G.end()){
            G[X_sum[i]]=1;
        }
        else{
            G[X_sum[i]]++;
        }
        if(G.find(X_sum[i]-K) != G.end()){
            count+=G[X_sum[i]-K];
        }
    }
    cout<<count;

    
}