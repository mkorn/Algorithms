#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
	int n, m, d[101], e[10001][4];
	cin>>n>>m;
	int a, b, c;
	for(int i=1; i<=m; i++)
	{
		cin>>e[i][1]>>e[i][2]>>e[i][3];
	}
	for(int i=1; i<=n; i++)
	{
		d[i]=100000000;
	}
	d[1]=0;
	for(int i=1; i<n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(e[j][3]>=0 && d[e[j][2]]>d[e[j][1]]+e[j][3])
				d[e[j][2]]=d[e[j][1]]+e[j][3];
		}
	}
	for(int i=1; i<=n; i++)
	{
		if(d[i]!=100000000)
			cout<<d[i];
		else
			cout<<"30000";
		cout<<" ";
	}
	
	return 0;
}
