#include <iostream>
#include <cstdio>
using namespace std;

int n;
int visited[101];
int graph[101][101];
bool t=true;

void dfs(int start)
{
	visited[start]=1;
	for (int i=1; i<=n; i++)
	{
		if (graph[start][i]==1)
		{
			if(visited[i]==0)
				dfs(i);
		}
	}
	visited[start]=2;
}

int main()
{
	freopen("tree.in", "rt", stdin);
	freopen("tree.out", "wt", stdout);
  cin>>n;
	int u, v;
	int m=0;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>graph[i][j];
			if(i<j && graph[i][j]==1)
				m++;
		}
	}
	if(m!=n-1)
		t=false;
	dfs(1);
	for(int i=1; i<=n; i++)
  {
    if(visited[i]!=2)
    {
      t=false;
    }
  }
  if(t)
  	cout<<"YES";
  else
  	cout<<"NO";
    
    return 0;
}
