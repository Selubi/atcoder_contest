#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main()
{
    int A, B, W;
    cin >> A >> B >> W;
    W *= 1000;
    bool flag1 = 1;
    bool flag2 = 1;
    int cmin = W / B;
    int cmax = W / A;
    if (W % B != 0)
    {
        flag1 = 0;
        for (int i = cmin; i >= 0; i--)
        {
            int j = 1;
            while (j * A <= W - B * i)
            {
                if (j * A <= W - B * i && W - B * i <= j * B)
                {
                    cmin = i + j;
                    flag1 = 1;
                    break;
                }
                j++;
            }
            if (flag1)
                break;
        }
    }
    if (W % A != 0)
    {
        flag2 = 0;
        for (int i = cmax; i >= 0; i--)
        {
            int j = 1;
            while (j * A <= W - A * i)
            {
                if (j * A <= W - A * i && W - A * i <= j * B)
                {
                    cmax = i + j;
                    flag2 = 1;
                    break;
                }
                j++;
            }
            if (flag2)
                break;
        }
    }
    if(flag1&&flag2){
        cout<<cmin<<" "<<cmax;
    }
    else{
        cout<<"UNSATISFIABLE";
    }
 
}