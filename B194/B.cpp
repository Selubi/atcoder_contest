#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
 
int findn(vector<int> a)
{
    int mini = a[0];
    int ans = 0;
    rep(i, a.size())
    {
        if (mini > a[i])
        {
            mini = a[i];
            ans = i;
        }
    }
    return ans;
}
 
int findnnotx(vector<int> a, int x)
{
    int mini = a[0];
    int ans = 0;
    rep(i, a.size())
    {
        if (i == x)
            continue;
        if (mini > a[i])
        {
            mini = a[i];
            ans = i;
        }
    }
    return ans;
}
int main()
{
    int N;
    cin >> N;
    int minA, minB;
    int indexa, indexb;
    vector<int> a,b;
    rep(i, N)
    {
        int tempa,tempb;
        cin>>tempa>>tempb;
        a.push_back(tempa);
        b.push_back(tempb);
    }
    indexa=findn(a);
    indexb=findn(b);
    int ans;
    int minx=10000000;
    if(indexa==indexb){
        minx=a[indexa]+b[indexb];
        int tempa,tempb;
        tempa=findnnotx(a,indexa);
        tempb=findnnotx(b,indexb);
        ans=min(minx,max(a[tempa],b[indexb]));
        ans=min(ans,max(b[tempb],a[indexa]));
 
    }
    else{
        ans=max(a[indexa],b[indexb]);
    }
    cout<<ans;
}