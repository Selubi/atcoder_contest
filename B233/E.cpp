#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (long long i = (long long)j; i < (long long)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;

int main(void){
    ll H,W,K;cin>>H>>W>>K;
    ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    ll count=1;
    if(K==1)cout<<1;
    else if(K==2){
        if(x1!=x2&&y1!=y2)cout<<2;
        if(x1!=x2&&y1==y2)cout<<H-2;
        if(x1==x2&&y1!=y2)cout<<W-2;
        if(x1==x2&&y1==y2)cout<<H+W-2;
    }
    
    else{
        ll pos=(H-1)+(W-1);
        K-=2;
        rep(i,0,K){
            count*=pos;
            count%=998244353;
        }
        count+=(H-1)*(W-1)*2;
        count+=(H-2)*(H-1);
        count+=(W-2)*(W-1);
        count+=(H-1)+(W-1);
        cout<<count%998244353;
    }
}