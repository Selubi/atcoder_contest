#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main()
{
    int L,R;cin>>L>>R;
    string S;cin>>S;
    L--;
    reverse(S.begin()+L,S.begin()+R);
    cout<<S;
}