#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(){
    int N;cin>>N;
    double D,H;cin>>D>>H;
    double min=0;
    rep(i,N){
        double d1,h1;cin>>d1>>h1;
        min=max(min,h1-(H-h1)/(D-d1)*d1);
    }
    cout<<min;
}