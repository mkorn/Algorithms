#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[101][101];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			scanf("%d", &a[i][j]);
			if(a[i][j]==-1001)
				a[i][j]=1000000000;
		}
	}
	for(int k=1; k<=n; k++)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(a[i][k]<1000000000 && a[k][j]<1000000000 && a[i][j]>a[i][k]+a[k][j])
					a[i][j]=a[i][k]+a[k][j];
			}
		}
	}
	int u, v;
	for(int i=1; i<=m; i++)
	{
		scanf("%d%d", &u, &v);
		if(a[u][v]==1000000000)
			printf("No path");
		else
			printf("%d", a[u][v]);
		printf("\n");
	}
	
	return 0;
}
