#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

int main ()
{
	long long x, y, A, B, C;
	cin>>x>>y>>A>>B>>C;
	long double p=(double)(A*x + B*y + C)/sqrt(A*A + B*B);
	cout<<setprecision(10)<<fixed<<fabs(p);
	
	return 0;
}
