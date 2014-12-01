#include <iostream>
#include <stdlib.h>
using namespace std;

int n;
int a[100001];
void build(int i)
{
	while(i>1 && a[i/2]>a[i])
	{
		swap(a[i], a[i/2]);
		i=i/2;
	}
	
	return;
}
void heapify(int i)
{
	while(2*i<=n)
	{
		int largest=i;
		if(a[2*i]<a[i])
			largest=2*i;
		if(2*i+1<=n && a[2*i+1]<a[largest])
			largest=2*i+1;
		if(largest==i)
			break;
		else
		{
			swap(a[i], a[largest]);
			i=largest;
		}
	}
	
	return;
}

int main ()
{
	scanf("%d", &n);
	int n1=n;
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1; i<=n; i++)
	{
		build(i);
	}
	for(int i=1; i<=n1; i++)
	{
		printf("%d ", a[1]);
		a[1]=a[n];
		n--;
		heapify(1);
	}
	
	return 0;
}
