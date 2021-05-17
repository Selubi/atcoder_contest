#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
 
ll logabaseb(ll a,ll b){
    return floor(log(a)/log(b));
}
int main(){
    ll N;cin>>N;
    ll sent=sqrt(N);
    ll ans=0;
    vector<ll> a;
    for(ll i=2;i<=sent;i++){
        ll temp=logabaseb(N,i);
        if(find(a.begin(),a.end(),i)!=a.end()){continue;}
        ans+=temp-1;
        for(int j=2;j<=temp;j++){
            a.push_back((ll)pow(i,j));
        }
    }
    cout<<N-ans;
}