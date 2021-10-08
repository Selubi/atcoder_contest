#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
typedef long long ll;
int main(void)
{
    ll N, K;
    cin >> N >> K;
    vector<vector<ll>> friends;
    rep(i, 0, N)
    {
        vector<ll> temp(2, 0);
        cin >> temp[0] >> temp[1];
        friends.push_back(temp);
    }
    sort(friends.begin(), friends.end());
    ll counter = 0;
    ll pos = 0;
    ll posbefore = -1;
    pos = K;
    while (true)
    {
        K = 0;
        if (!(counter == N))
        {
            while (friends[counter][0] <= pos)
            {
                K += friends[counter][1];
                counter++;
                if (counter == N)
                    break;
            }
        }
        pos += K;
        if (pos == posbefore)
            break;
        posbefore = pos;
    }
    cout << pos;
}