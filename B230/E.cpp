#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (long long i = (long long)j; i < (long long)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;

int main(void){
    ll N;cin>>N;
    ll prev=N;
    ll cur=0;
    ll sum=0;
    ll i=2;
    vector<ll> factors;
    while(true){
        cur=N/i;
        if(N/(N/cur)==N){
            sum+=N;
            break;
        }
        sum+=(prev-cur)*(N/(N/cur));
        prev=cur;
        i++;
    }
    cout<<sum;
    return 0;
}