/*
Строит дерево из связного графа без петель и кратных ребер.
Алгоритм Краскала.
*/
#include <iostream>
using namespace std;
int v[101];
int b[10000], e[10000];
int color[101];
int n, m;

void union1(int x, int y)
{
	int t=color[y];
	for(int i=1; i<=n; i++)
	{
		if(color[i]==t)
			color[i]=color[x];
	}
}

int main ()
{
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		cin>>b[i]>>e[i];
	}
	for(int i=1; i<=n; i++)
	{
		color[i]=i;
	}
	for(int i=0; i<m; i++)
	{
		if(color[b[i]]!=color[e[i]])
		{
			union1(b[i], e[i]);
			cout<<b[i]<<" "<<e[i]<<"\n";
		}
	}
	
	return 0;
}
