#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

int main ()
{
	int a1, a2, b1, b2, c1, c2;
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	int A=a1*b2-a2*b1, A1=c1*b2-c2*b1, A2=a1*c2-a2*c1;
	
	if(A==0)
	{
		if(A1==0 && A2==0)
			cout<<"Ambiguous";
		else
			cout<<"No";
	}
	else
	{
		double x=(double)A1/A;
		double y=(double)A2/A;
		cout<<"Single\n"<<setprecision(9)<<fixed<<x<<" "<<y;
	}
	
	return 0;
}
