#include <iostream>
#include <cstdio>
using namespace std;

int a[100000];

void merge(int first, int last)
{
	int middle, start, final, j;
	int mas[100000];
	middle=(first+last)/2;
	start=first;
	final=middle+1;
	for(j=first; j<=last; j++)
	{
		if ((start<=middle) && ((final>last) || (a[start]<a[final])))
		{
			mas[j]=a[start];
			start++;
		}
		else
		{
			mas[j]=a[final];
			final++;
		}
	}
	for( j=first; j<=last; j++)
	{
		a[j]=mas[j];
	}
}
void mergesort(int first, int last)
{
	if (first<last)
	{
		mergesort(first, (first+last)/2);
		mergesort((first+last)/2+1, last);
		merge(first, last);
	}
}

int main ()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	mergesort(0, n-1);
	for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}
