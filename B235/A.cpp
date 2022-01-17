#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;


int sum_x (int a,int b, int c){
    return a*100+b*10+c*1;
}
int main(){
    string S;cin>>S;
    int a=S[0]-'0',b=S[1]-'0',c=S[2]-'0';
    cout<<sum_x(a,b,c)+sum_x(b,c,a)+sum_x(c,a,b);

}