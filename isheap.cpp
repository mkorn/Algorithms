#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
	int n;
	scanf("%d", &n);
	int a[100001];
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	bool t=true;
	for(int i=1; i<=n/2; i++)
	{
		if(a[i]>a[2*i])
		{
			t=false;
			break;
		}
		if(2*i+1<=n && a[i]>a[2*i+1])
		{
			t=false;
			break;
		}
	}
	if(t)
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}
