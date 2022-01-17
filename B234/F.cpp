#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(void)
{
    vector<ll> freq(26,0);
    string S;cin>>S;
    for(auto x: S){
        freq[x-'a']++;
    }
    int types=0;
    for(auto x:freq){
        cout<<x<<" ";
    }

}