#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
	int n;
	scanf("%d", &n);
	int a[n+1];
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int j=2; j<=n; j++)
	{
		int k=a[j];
		int i=j-1;
		while( i>0 && a[i]>k)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=k;
	}
	for(int i=1; i<=n; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}
