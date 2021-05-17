#include <iostream>
#include <stdlib.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main()
{
    int N;
    cin >> N;
    int A = 0, B = 1001;
    rep(i, N)
    {
        int temp;
        cin >> temp;
        A = max(A, temp);
    }
    rep(i, N)
    {
        int temp;
        cin >> temp;
        B = min(B, temp);
    }
    if (B - A + 1 > 0)
    {
        cout << B - A + 1;
    }
    else
    {
        cout << 0;
    }
}