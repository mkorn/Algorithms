#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>
using namespace std;

int main ()
{
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	double c1=(double)y1/x1;
	double c2=(double)y2/x2;
	double p1=atan(c1);
	double p2=atan(c2);
	if(x1<0)
		p1+=M_PI;
	if(x2<0)
		p2+=M_PI;
	double p3=fabs(p2-p1);
	if(2*M_PI-p3<p3)
		p3=2*M_PI-p3;
	
	double p4=p3*((double)180/M_PI);
	cout<<setprecision(12)<<fixed<<p3<<"\n"<<p4;
	
	return 0;
}
