#include <iostream>
#include <stdlib.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
 
void flip(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    string S1 = S.substr(0, N);
    string S2 = S.substr(N);
    int Q;
    cin >> Q;
    bool flag = 0;
    rep(i, Q)
    {
        int T, A, B;
        cin >> T >> A >> B;
        if (T == 1)
        {
            if (!flag)
            {
                char *switch1, *switch2;
                if (A - 1 < N)
                {
                    switch1 = &S1[A - 1];
                }
                else
                {
                    switch1 = &S2[A - N - 1];
                }
                if (B - 1 < N)
                {
                    switch2 = &S1[B - 1];
                }
                else
                {
                    switch2 = &S2[B - N - 1];
                }
                flip(switch1, switch2);
            }
            if (flag)
            {
                char *switch1, *switch2;
                if (A - 1 < N)
                {
                    switch1 = &S2[A - 1];
                }
                else
                {
                    switch1 = &S1[A - N - 1];
                }
                if (B - 1 < N)
                {
                    switch2 = &S2[B - 1];
                }
                else
                {
                    switch2 = &S1[B - N - 1];
                }
                flip(switch1, switch2);
            }
        }
        if (T == 2)
        {
            flag = !flag;
        }
    }
    if (!flag)
    {
        cout << S1 << S2;
    }
    else
    {
        cout << S2 << S1;
    }
}