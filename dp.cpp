#include <iostream>
#include <cstdio>
using namespace std;

int dp[10001];
int main ()
{
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	int v, n, a[101], c[101];
	cin>>v>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i]>>c[i];
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=v; j>=0; j--)
		{
			if(a[i]<=j && dp[j]<dp[j-a[i]]+c[i])
				dp[j]=dp[j-a[i]]+c[i];
		}
	}
	cout<<dp[v];
	
	return 0;
}
