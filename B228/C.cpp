#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[0] > v2[0];
}
bool sortcol2( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[1] < v2[1];
}
int main()
{
    int N,K;cin>>N>>K;
    vector<vector<int> > s(N,vector<int>(3,0));
    rep(i,0,N){
        int temp1,temp2,temp3;cin>>temp1>>temp2>>temp3;
        s[i][0]=temp1+temp2+temp3;
        s[i][1]=i;
    }
    sort(s.begin(),s.end(),sortcol);
    int s1=s[K-1][0];
    int index;
    for(int i=N-1;i>=0;i--){
        if(s[i][0]>=s1-300)
        {
            index=i+1;
            break;
        }
    }
    rep(i,0,index){
        s[i][2]=1;
    }
    sort(s.begin(),s.end(),sortcol2);
    rep(i,0,N){
        if(s[i][2])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}

///97542