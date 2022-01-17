#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
 
int main()
{
    int N,Q;cin>>N>>Q;
    map<int,vector<int>> A;
    rep(i,0,N){
        int temp;cin>>temp;
        if(A.find(temp)!=A.end()){
            A[temp].emplace_back(i+1);
        }
        else{
            A[temp]=vector<int>{i+1};
        }
    }
    rep(i,0,Q){
        int x,k;cin>>x>>k;
        if(A.find(x)!=A.end()){
            if(A[x].size()>=k){
            cout<<A[x][k-1]<<endl;
            }
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;
    }
}