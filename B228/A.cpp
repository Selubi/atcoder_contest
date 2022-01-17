#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(){
    int S,T,X;cin>>S>>T>>X;
    bool ans=false;
    if(S<T){
        if(X>=S&&X<T)ans=true;
    }
    if(S>T){
        if(X>=S&&X<=23)ans=true;
        if(X>=0&&X<T)ans=true;
    }
    if(ans)cout<<"Yes";
    else cout<<"No";
}