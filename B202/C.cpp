#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main()
{
    ll count=0;
    vector<int> cA(100010, 0);
    vector<int> cB(100010, 0);
    vector<int> cC(100010, 0);
    int N;
    cin >> N;
    rep(i, N)
    {
        int temp;
        cin >> temp;
        cA[temp]++;
    }
    rep(i, N)
    {
        cin >> cB[i+1];
    }
    rep(i, N)
    {
        int temp;
        cin >> temp;
        cC[temp]++;
    }
    rep(i,N+1){
        count+=cA[cB[i]]*cC[i];
    }
    cout<<count;

}