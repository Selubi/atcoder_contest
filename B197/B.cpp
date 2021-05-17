#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main()
{
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    vector<string> a;
    int count = 0;
    X -= 1;
    Y -= 1;
    rep(i, H)
    {
        string temp;
        cin >> temp;
        a.push_back(temp);
    }
    if (a[X][Y] == '#')
    {
        cout << 0;
    }
    else
    {
        count++;
        //up
        for (int i = X-1; i >= 0; i--)
        {
            if (a[i][Y] == '.')
                count++;
            else
                break;
        }
        //down
        for (int i = X+1; i < H; i++)
        {
            if (a[i][Y] == '.')
                count++;
            else
                break;
        }
        //left
        for (int i = Y-1; i >= 0; i--)
        {
            if (a[X][i] == '.')
                count++;
            else
                break;
        }
        //right
        for (int i = Y+1; i < W; i++)
        {
            if (a[X][i] == '.')
                count++;
            else
                break;
        }
        cout << count;
    }
}