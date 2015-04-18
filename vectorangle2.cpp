#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>
using namespace std;

int main ()
{
    freopen("angle2.in", "rt", stdin);
    freopen("angle2.out", "wt", stdout);
    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    double c1= x1*x2 +y1*y2;
    double c2=x1*y2 - y1*x2;
    double p1=atan2(c2, c1);
    cout<<setprecision(10)<<fixed<<fabs(p1);
    
    return 0;
}
