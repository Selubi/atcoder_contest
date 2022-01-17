#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (long long i = (long long)j; i < (long long)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;

int main()
{
    bool flag=true;
    int N,M;cin>>N>>M;
    vector<int> A(N+1,0),B(N+1,0);
    rep(i,0,M){
        int temp1,temp2;cin>>temp1>>temp2;
        A[temp1]++;
        A[temp2]++;
    }
    rep(i,0,M){
        int temp1,temp2;cin>>temp1>>temp2;
        B[temp1]++;
        B[temp2]++;
    }
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    rep(i,0,N+1){
        if(A[i]!=B[i]){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
