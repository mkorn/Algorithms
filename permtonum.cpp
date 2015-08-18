/* Генерация номера по перестановке */
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	//freopen("permtonum.in", "rt", stdin);
	//freopen("permtonum.out", "wt", stdout);
	int n, p[21];
	long long f[22];
	f[0]=1;
	for(int i=1; i<=20; i++)
	{
		f[i]=f[i-1]*i;
	}
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>p[i];
	}
	long long k=1;
	for(int i=1; i<n; i++)
	{
		long long c=0;
		for(int j=i+1; j<=n; j++)
		{
			if(p[j]<p[i])
				c++;
		}
		k+=c*f[n-i];
	}
	cout<<k;
}
