#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
 
int main()
{
    ll B;
    cin >> B;
    ll C;
    cin >> C;
    ll range = C / 2LL;
    ll sum;
    //=2LL*range+1
    ll rangeto0, rangetoinf;
    int flag, neg;
    if (B > 0)
        neg = 0;
    else if (B < 0)
        neg = 1;
    else
        neg = 2;
    if (neg == 1) //negative
    {
        rangetoinf = range;
        ll temprange = (C - 1LL) / 2LL;
        if (temprange >= abs(B))
        {
            //0 is included here
            rangeto0 = abs(B);
            flag = 1;
        }
        else
        {
            rangeto0 = temprange;
            flag = 0;
        }
 
        if (C % 2 == 1)
        {
 
            if (flag)
            {
                sum = ((rangetoinf + rangeto0 + 1LL) * 2LL) - 1LL; //to zero zero overhead, cant revert back to neg, to inf is fine
            }
            else
            {
                sum = ((rangetoinf + rangeto0 + 1LL) * 2LL) - 1LL; //to zero -1, cant revert back to neg, to inf is fine
            }
        }
        if (C % 2 == 0)
        {
            if (flag)
            {
                sum = ((rangetoinf + rangeto0 + 1LL) * 2LL) - 2LL; //zero overhead 1 LL+ inf range overhead 1 LL
            }
            else
            {
                sum = ((rangetoinf + rangeto0 + 1LL) * 2LL) - 1LL; //to zero is fine.to inf -1
            }
        }
    }
    else if (neg == 0) //positive
    {
        rangetoinf = (C - 1LL) / 2LL;
        ll temprange = range;
        if (temprange >= abs(B))
        {
            //0 is included here
            rangeto0 = abs(B);
            flag = 1;
        }
        else
        {
            rangeto0 = temprange;
            flag = 0;
        }
        if (temprange >= abs(B))
        {
            //0 is included here
            rangeto0 = abs(B);
            flag = 1;
        }
        else
        {
            rangeto0 = temprange;
            flag = 0;
        }
        
        if (C % 2LL == 1LL)
        {
            if (flag)
            {
                sum = ((rangetoinf + rangeto0 + 1LL) * 2LL) - 2LL; //zero overhead. to zero range is enough. to inf range overhead-1
            }
            else
            {
                sum = ((rangetoinf + rangeto0 + 1LL) * 2LL) - 1LL; //to inf cannot revert back to +, to zero fine
            }
        }
        if (C % 2LL == 0LL)
        {
            if (flag)
            {
                sum = ((rangetoinf + rangeto0 + 1LL) * 2LL) - 1LL; //zero overhead.
            }
            else
            {
                sum = ((rangetoinf + rangeto0 + 1LL) * 2LL) - 1LL; //to inf is fine. to zero -1
            }
        }
        //lmao
        if(C==1)sum=2;
    }
    else if (neg == 2) //zero
    {
        ll temprange = C / 2LL;
        if (C % 2 == 1)
        {
            sum = (temprange)*2LL + 1LL; //zero and range min to plus all can
        }
        else
        {
            sum = (temprange)*2LL + 1LL - 1LL;
        }
    }
    cout << sum;
}