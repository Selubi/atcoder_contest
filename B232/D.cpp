#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main(void)
{
    int H, W;
    cin >> H >> W;
    int max_s = 1;
    vector<vector<char>> M(H, vector<char>(W, 0));
    rep(i, 0, H)
    {
        rep(j, 0, W)
        {
            cin >> M[i][j];
        }
    }
    vector<vector<int>> S(H, vector<int>(W, 0));
    S[0][0]=1;
    rep(i, 0, H)
    {
        rep(j, 0, W)
        {
            if(i==0&&j==0)continue;
            int a=-1,b=-1;
            if(j!=0&&M[i][j]!='#'){
                a=S[i][j-1]+1;
            }
            if(i!=0&&M[i][j]!='#'){
                b=S[i-1][j]+1;
            }
            int score=max(a,b);
            if(score==0||score==-1){
                S[i][j]=-1;
            }
            else{
                S[i][j]=score;
                max_s=max(score,max_s);
            }
        }
    }
    cout<<max_s;
    //rep(i, 0, H)
    // {
    //     rep(j, 0, W)
    //     {
    //         cout<<M[i][j];
    //     }
    //     cout<<endl;
    // }
    //     rep(i, 0, H)
    // {
    //     rep(j, 0, W)
    //     {
    //         cout<<S[i][j];
    //     }
    //     cout<<endl;
    // }
}