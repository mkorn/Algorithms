/* Максимальный подпалиндром */
#include <iostream>
#include <cstdio>
using namespace std;

int max(int a, int b)
{
	if(a>=b)
		return a;
	return b;
}
int main()
{
	//freopen("lis.in", "rt", stdin);
	//freopen("lis.out", "wt", stdout);
	int n=0;
	string s1="", s2="";
	cin>>s1;
	n=s1.length();
	for(int i=n-1; i>=0; i--)
	{
		s2+=s1[i];
	}
	int dp[101][101];
	for (int i=0; i<=n; i++)
	{
		for (int j=0; j<=n; j++)
		{
			if (i==0 || j==0)
				dp[i][j]=0;
			else
			{
				if (s1[i-1] == s2[j-1])
					dp[i][j] = dp[i-1][j-1]+1;
				else
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	int lcslength = dp[n][n];
	string lcs="";
	int i=n, j=n;
	while (i>0 && j>0)
	{
		if (s1[i-1]==s2[j-1])
		{
			lcs+=s1[i-1];
			i--;
			j--;
			lcslength--;
		}
		else 
		{
			if(dp[i-1][j]>dp[i][j-1])
				i--;
			else
				j--;
		}
	}
	cout<<lcs.length()<<"\n"<<lcs;
	
	return 0;
}
