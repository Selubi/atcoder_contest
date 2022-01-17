#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(){
    int N;cin>>N;
    if(N>=42){
        printf("AGC%03d",N+1);
    }
    else printf("AGC%03d",N);
}