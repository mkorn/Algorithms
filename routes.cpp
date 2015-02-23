#include <iostream>
#include <cstdio>
using namespace std;

long long a[31][31];
int main()
{
	int n, m;
	cin>>n>>m;
	a[1][1]=1;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(i>1)
				a[i][j]+=a[i-1][j];
			if(j>1)
				a[i][j]+=a[i][j-1];
		}
	}
	cout<<a[n][m];
	
	return 0;
}
