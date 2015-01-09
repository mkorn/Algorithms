#include <iostream>
#include <cstdio>
using namespace std;

int k[100001];
int main ()
{
	int n;
	scanf("%d", &n);
	int a;
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a);
		k[a]++;
	}
	for(int i=1; i<=100000; i++)
	{
		for(int j=1; j<=k[i]; j++)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}
