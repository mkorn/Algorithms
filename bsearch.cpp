#include <iostream>
using namespace std;

int main ()
{
	int n, k;
	scanf("%d%d", &n, &k);
	int a[100001];
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	int p;
	for(int i=1; i<=k; i++)
	{
		scanf("%d", &p);
		int l=0, r=n+1;
		while(r-l>1)
		{
			int m=(l+r)/2;
			if(a[m]>=p)
				r=m;
			else
				l=m;
		}
		
		if(r<n+1 && a[r]==p)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}
