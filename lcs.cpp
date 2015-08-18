#include <iostream>
#include <cstdio>
using namespace std;

int dp[1001][1001];
int main ()
{
	freopen("lcs.in", "rt", stdin);
	freopen("lcs.out", "wt", stdout);
	int n, m, a1[1003], a2[1003];
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a1[i];
	}
	cin>>m;
	for(int i=0; i<m; i++)
	{
		cin>>a2[i];
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(a1[i-1]==a2[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	cout<<dp[n][m];
	
	return 0;
}
