#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
 
int main()
{
    ll N;
    cin >> N;
    ll count = 0;
    ll comma = 5;
    ll numbercount=1;
    ll top;
    for(int i=15;i>=0;i-=3){
        if(N<(ll)pow(10,i)){
            comma-=1;
            continue;
        }
        else{
            top=N-pow(10,i);
            count+=(top+1)*comma;
            comma--;
            break;
        }
    }
    for(;comma>0;comma--){
        count+=(pow(10,(comma*3)+3)-pow(10,comma*3))*comma;
    }
    cout<<count;
}