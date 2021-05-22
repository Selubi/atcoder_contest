#include <iostream>
#include <stdlib.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    cout<<abs(7-A)+abs(7-B)+abs(7-C);
}