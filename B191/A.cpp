#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
 
int main (){
    int V;cin>>V;
    int T,S;cin>>T>>S;
    int D;cin>>D;
    if(!(D<=S*V&&D>=T*V)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}