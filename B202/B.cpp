#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main()
{
    string S;
    cin>>S;
    reverse(S.begin(),S.end());
    for(char x : S){
        if(x=='6')cout<<9;
        else if(x=='9')cout<<6;
        else cout<<x;
    }
}