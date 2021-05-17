#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
 
 
int main()
{
    int N;cin>>N;
    double x0,y0,xhalf,yhalf;cin>>x0>>y0>>xhalf>>yhalf;
    double xcent,ycent;
    xcent=(x0+xhalf)/2;
    ycent=(y0+yhalf)/2;
    double xdist=abs(x0-xhalf)/2;
    double ydist=abs(y0-yhalf)/2;
    double r=sqrt(pow(xdist,2)+pow(ydist,2));
    double angle=2*M_PI/N;
    double xbefore=x0-xcent;
    double ybefore=y0-ycent;
    double xafter=xbefore*cos(angle)-ybefore*sin(angle);
    double yafter=xbefore*sin(angle)+ybefore*cos(angle);
    cout<<xcent+xafter<<" "<<ycent+yafter;
}