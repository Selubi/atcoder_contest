#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(){
    string S,T;cin>>S>>T;
    bool flag=1;
    bool check=0;
    bool used=0;
    int checker;
    rep(i,S.length()){
        int temp=S[i]-T[i];
        if(temp==0&&check){
            flag=0;
            break;
        }
        if(temp!=0&&!used&&!check){
            check=1;
            checker=temp;
            continue;
        }
        if(temp!=0&&check){
            if(temp+checker==0){
                used=1;
                checker=0;
                check=0;
                continue;
            }
            else{
                flag=0;
                break;
            }
        }
        if(temp!=0&&used){
            flag=0;
            break;
        }
    }
    if(flag)cout<<"Yes";
    if(!flag)cout<<"No";

}