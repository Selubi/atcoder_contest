#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int main()
{
    string N;
    cin >> N;
    vector<int> freq(10, 0);
    int S = N.length();
    rep(i, S)
    {
        freq[N[i] - '0']++;
    }
    int S1, S2;
    if (S % 2 == 0)
    {
        S1 = S / 2;
        S2 = S / 2;
    }
    else
    {
        S1 = S / 2;
        S2 = S1 + 1;
    }
    ll I1 = 0, I2 = 0;

    for (int i = 9; i >= 0; i--)
    {
        if (freq[i] != 0)
        {
            I1 += i;
            freq[i]--;
            break;
        }
    }
    S1--;
    for (int i = 9; i >= 0; i--)
    {
        if (freq[i] != 0)
        {
            I2 += i;
            freq[i]--;
            break;
        }
    }
    S2--;
    while (S1 > 0 || S2 > 0)
    {
        if (S1 > 0)
        {
            I1 *= 10;
            for (int i = 9; i >= 0; i--)
            {
                if (freq[i] != 0)
                {
                    I1 += i;
                    freq[i]--;
                    break;
                }
            }
            S1--;
        }
        if (S2 > 0)
        {
            I2 *= 10;
            for (int i = 9; i >= 0; i--)
            {
                if (freq[i] != 0)
                {
                    I2 += i;
                    freq[i]--;
                    break;
                }
            }
            S2--;
        }
    }
    cout << I1 * I2;
}

///97542