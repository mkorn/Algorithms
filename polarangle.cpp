#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>
using namespace std;

int main ()
{
	int a, b;
	cin>>a>>b;
	double c=(double)b/a;
	double p1=atan(c);
	if(a<0)
		p1+=M_PI;
	if(a>=0 && b<0)
		p1+=2*M_PI;
	double p2=p1*((double)180/M_PI);
	cout<<setprecision(12)<<fixed<<p1<<"\n"<<p2;
	
	return 0;
}
