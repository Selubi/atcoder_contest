#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
 
int main(){
    int N;cin>>N;
    int X;cin>>X;
    vector<int> A;
    rep(i,N){
        int temp;
        cin>>temp;
        if(temp==X)continue;
        A.push_back(temp);
    }
 
    for(int i : A){
        cout<<i<<" ";
    }
    if(A.size()==0){
        cout<<" ";
    }
 
 
}