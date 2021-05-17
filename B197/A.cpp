#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin>>s;
    s.push_back(*(s.begin()));
    printf("%s",s.begin()+1);
 
}