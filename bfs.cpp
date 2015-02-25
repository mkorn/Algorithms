#include <iostream>
#include <queue>
using namespace std;

int main ()
{
	int n, s, f;
	int g[101][101];
	int d[101];
	queue<int> q;
	scanf("%d%d%d", &n, &s, &f);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			scanf("%d", &g[i][j]);
		}
		d[i]=-1;
	}
	d[s]=0;
	q.push(s);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int j=1; j<=n; j++)
		{
			if(g[u][j]==1)
			{
				if(d[j]==-1)
				{
					d[j]=d[u]+1;
					q.push(j);
				}
			}
		}
	}
	if(d[f]==-1)
		printf("0");
	else
		printf("%d", d[f]);
	
	return 0;
}
