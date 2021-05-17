#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(){
    int count=0;
    string s;cin>>s;
    string comp("ZONe");
    rep(i,s.size()-3){
        if(s.substr(i,4)==comp)count++;
    }
    cout<<count;
}