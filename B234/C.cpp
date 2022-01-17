#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (long long i = (long long)j; i < (long long)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
ll N, X;
ll count_x=0;
void solve(vector<vector<ll>>& A,vector<ll>& L, ll i, ll& n, ll sigma){
    rep(j,0,L[i]){
        if(i!=n-1){
            // cout<<A[i][j]<<" ";
            solve(A,L,i+1,n,sigma*A[i][j]);
        }
        else{
            if(sigma*A[i][j]==X)count_x++;
            // cout<<A[i][j]<<endl;
        }
    }
}
int main()
{

    cin >> N >> X;
    vector<vector<ll>> A(N, vector<ll>(0, 0));
    vector<ll> L(N, 0);
    rep(i, 0, N)
    {
        cin >> L[i];
        int count = 0;
        rep(j, 0, L[i])
        {
            ll temp;
            cin >> temp;
            if (X % temp == 0)
            {
                A[i].emplace_back(temp);
                count++;
            }
        }
        L[i] = count;
    }
    solve(A,L,0,N,1);
    cout<<count_x;
    // rep(i,0,N){
    //     rep(j,0,L[i]){
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
}
