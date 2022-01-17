#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main()
{
    int N;cin>>N;
    int cur = 0;
    rep(i,0,N){
        int temp;cin>>temp;
        if(temp>cur)cur=temp;
        else break;
    }
    cout<<cur;
}