#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
	long x1, y1, x2, y2, x3, y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	if((x1-x3)*(y2-y3)-(x2-x3)*(y1-y3)==0)
		cout<<"Yes";
	else
		cout<<"No";
	
	return 0;
}
