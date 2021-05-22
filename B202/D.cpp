#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main()
{
    ll A, B, K;
    cin >> A >> B >> K;
    //decide the max limit;
    ll maxl;
    {
        int N = A + B;
        int hi = max(A, B);
        int low = min(A, B);
        int fac = N - hi;
        double temp = 1;
        bool flag1 = 0, flag2 = 0;
        int i = 1;
        while (1)
        {
            if (N > fac)
            {
                temp *= N;
                N--;
            }
            else
            {
                flag1 = true;
            }
            if (i <= low)
            {
                temp /= i;
                i++;
            }
            else
            {
                flag2 = true;
            }
            if (flag1 && flag2)
                break;
        }
        maxl = temp;
    }
    ll left = 1;
    ll right = maxl;
    ll mid, remains;
    int countup = 0, countdown = 0;
    while (left <= right)
    {
        mid = (right + left) / 2LL;
        remains = (right + left) % 2LL;
        if (K > mid && B > 0)
        {
            cout << "b";
            left = mid + 1LL;
            B--;
            countup++;
        }
        else if (K < mid && A > 0)
        {
            cout << "a";
            right = mid - 1LL;
            A--;
            countup++;
        }
        else
        {

            rep(i, A)
            {
                cout << "a";
            }
            rep(i, B)
            {
                cout << "b";
            }

            break;
        }
    }
}