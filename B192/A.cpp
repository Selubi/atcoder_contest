#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main(){
    int x;cin>>x;
    if(x%100==0)cout<<100;
    else{
    cout<<100-(x%100);
    }
}