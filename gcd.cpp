#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main ()
{
	int n, m;
	scanf("%d%d", &n, &m);
	if(n<0 || m<0)
	{
		n=abs(n);
		m=abs(m);
	}
	while(n!=0 && m!=0)
	{
		if(n>m)
			n%=m;
		else
			m%=n;
	}
	printf("%d", n+m);
	
	return 0;
}
