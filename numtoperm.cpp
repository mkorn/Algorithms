/* Генерация перестановки по номеру */
#include <iostream>
#include <cstdio>
using namespace std;

bool b[21];
int main()
{
	//freopen("numtoperm.in", "rt", stdin);
	//freopen("numtoperm.out", "wt", stdout);
	long long n, k, p[21], u;
	long long f[22];
	f[0]=1;
	for(int i=1; i<=20; i++)
	{
		f[i]=f[i-1]*i;
	}
	cin>>n>>k;
	k--;
	for(int i=1; i<=n; i++)
	{
		u=k/f[n-i];
		k-=u*f[n-i];
		int j=1;
		while(u>0 || b[j])
		{
			if(!b[j])
				u--;
			j++;
		}
		b[j]=true;
		p[i]=j;
		cout<<p[i]<<" ";
	}
}
