#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main(){
    int T;cin>>T;
    rep(i,T){
        ll L,R;cin>>L>>R;
        ll sum=0;
        if(R<2*L){
            sum=0;
        }
        else{
        sum=(((R-2*L)+1)*((R-2*L)+2))/2;
        }
        cout<<sum<<endl;
    }
}