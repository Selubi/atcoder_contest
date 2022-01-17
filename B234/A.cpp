#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(){
    int X,Y;cin>>X>>Y;
    if(X>=Y)cout<<0;
    else cout<<ceil(((float)Y-X)/10);
}