#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
 
int main()
{
    int H;
    cin >> H;
    int W;
    cin >> W;
    char X[10][10];
    rep(i, H)
    {
        rep(j, W)
        {
            cin >> X[i][j];
        }
    }
    int ans = 4;
    for (int i = 1; i < H - 1; i++)
    {
        for (int j = 1; j < W - 1; j++)
        {
            if (X[i][j] == '#')
                continue;
            int count = 0;
            bool left = false, right = false, up = false, down = false;
            if (X[i - 1][j] == '#')
            {
                count++;
                up = true;
            }
 
            if (X[i + 1][j] == '#')
            {
                count++;
                down = true;
            }
 
            if (X[i][j + 1] == '#')
            {
                count++;
                right = true;
            }
            if (X[i][j - 1] == '#')
            {
                count++;
                left = true;
            }
 
            if (count == 2)
            {
                if(left&&right)continue;
                if(up&&down)continue;
                ans+=2;
            }
            if (count == 3)
                ans += 4;
        }
    }
    cout << ans;
}