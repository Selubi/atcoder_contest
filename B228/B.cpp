#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(){
    int N,X;cin>>N>>X;
    vector<int> chain(N+1,0);
    vector<bool> flag(N+1,false);
    rep(i,1,N+1){
        cin>>chain[i];
    }
    int count=1;
    flag[X]=true;
    int next= chain[X];
    while(!flag[next]){
        count++;
        flag[next]=true;
        next= chain[next];
    }
    cout<<count;
}