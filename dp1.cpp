/* Максимальная убывающая подпоследовательность */
#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
	//freopen("lis.in", "rt", stdin);
	//freopen("lis.out", "wt", stdout);
	int n;
	cin>>n;
	int a[16001], dp[16001];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	dp[0]=1;
	int max0=0;
	for(int i=1; i<n; i++)
	{
		int max=0;
		for(int j=i-1; j>=0; j--)
		{
			if(a[j]>a[i])
			{
				if(max<dp[j])
					max=dp[j];
			}
		}
		dp[i]=max+1;
		if(max0<dp[i])
			max0=dp[i];
	}
	cout<<max0;
	
	return 0;
}
