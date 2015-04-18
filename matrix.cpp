#include <iostream>
#include <cstdio>
using namespace std;
int a[101][101];
int n;
int visited[101];

void dfs(int start)
{
	visited[start]=1;
	for(int i=1; i<=n; i++)
	{
		if(a[start][i]==1 && visited[i]==0)
			dfs(i);
	}
}

int main ()
{
	freopen("matrix.in", "rt", stdin);
	freopen("matrix.out", "wt", stdout);
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int k=0;
	for(int i=1; i<=n; i++)
	{
		if(visited[i]==0)
		{
			k++;
			dfs(i);
		}
	}
	printf("%d", k);
	
	return 0;
}
