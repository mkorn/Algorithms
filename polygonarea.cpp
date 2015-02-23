#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdio> 
using namespace std;

int main()
{
	int n;
	double S=0;
	cin>>n;
	int x[n+1], y[n+1];
	cin>>x[0]>>y[0]>>x[1]>>y[1];
	S=(y[1]+y[0])*(x[1]-x[0]);
	for(int i=2; i<n; i++)
	{
		cin>>x[i]>>y[i];
		
		S+=(y[i]+y[i-1])*(x[i]-x[i-1]);
	}
	S+=(y[0]+y[n-1])*(x[0]-x[n-1]);
	S=(double)S/2;
	
	printf("%.6lf", abs(S));
	
	return 0;
}
