#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main()
{
    string s;cin>>s;
    string t;cin>>t;
    bool flag=true;
    int diff=-1;
    rep(i,0,s.length()){
        int a=s[i]-'a';
        int b=t[i]-'a';
        if (diff==-1){
            if(b-a<0){
                diff=26+b-a;
            }
            else{
                diff=b-a;
            }
            continue;
        }
        else{
            if(b-a<0){
                b+=26;
            }
            if(b-a!=diff){
                flag=false;
                break;
            }
        }
    }
    if(flag)cout<<"Yes";
    else cout<<"No";
}