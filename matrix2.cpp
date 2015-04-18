#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int n, m;
vector < vector<int> > g;
int visited[100001];
int comp1[100001];
int k;
vector< vector<int> > comp;

void dfs(int v)
{
	comp1[v]=k;
	visited[v]=1;
	comp[k].push_back(v);
	for(size_t i=0; i<g[v].size(); i++)
	{
		if(visited[g[v][i]]==0)
		{
			dfs(g[v][i]);
		}
	}
}

int main ()
{
	freopen("matrix2.in", "rt", stdin);
	freopen("matrix2.out", "wt", stdout);
	scanf("%d%d", &n, &m);
	g.resize(n+1);
	comp.resize(n+1);
	int u, v;
	for(int i=1; i<=m; i++)
	{
		scanf("%d%d", &u, &v);
		g[u].push_back(v);
		g[v].push_back(u);
	}
	if(m==0)
	{
		printf("%d\n", n);
		for(int i=1; i<=n; i++)
		{
			printf("1\n%d\n", i);
		}
	}
	else
	{
		for(int i=1; i<=n; i++)
		{
			if(visited[i]==0)
			{
				k++;
				dfs(i);
			}
		}
		printf("%d\n", k);
		for(int i=1; i<=k; i++)
		{
			printf("%d\n", comp[i].size());
			for(int j=0; j<comp[i].size(); j++)
			{
				printf("%d ", comp[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
