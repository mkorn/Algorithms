#include <stdlib.h>
#include <iostream>
#include<ctime>
using namespace std;

int a[100000];
int x;
void qsort(int l, int r)
{
	srand(time(NULL));
	x = a[l + rand()%(r-l)];
	int i=l, j=r;
	while(i<=j)
	{
		while(a[i]<x)
			i++;
		while(a[j]>x)
			j--;
		if(i<=j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if(l<j)
		qsort(l, j);
	if(i<r)
		qsort(i, r);
}

int main ()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(0, n-1);
	for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}
