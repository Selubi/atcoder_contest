#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main(){
    int N;cin>>N;
    int ans=-1;
    rep(i,N){
        int A,P,X;cin>>A>>P>>X;
        if(X>A){
            if(ans==-1){
                ans=P;
            }
            else{
                ans=min(ans,P);
            }
        }
    }
    cout<<ans;
}