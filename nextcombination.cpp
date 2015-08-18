#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	//freopen("nextcomb.in", "rt", stdin);
	//freopen("nextcomb.out", "wt", stdout);
	int n, k, a[100001];
	cin>>n>>k;
	for(int j=1; j<=k; j++)
	{
		cin>>a[j];
	}
	long long i=k;
	while(i>=1 && n-a[i]==k-i)
	{
		i--;
	}
	if(i==0)
		cout<<"-1";
	else
	{
		a[i]++;
		for(int j=i+1; j<=k; j++)
		{
			a[j]=a[j-1]+1;
		}
		for(int j=1; j<=k; j++)
		{
			cout<<a[j]<<" ";
		}
	}
}
