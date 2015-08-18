/*
Генерация всех сочетаний из n по k чисел в лексикографическом порядке
*/
#include <iostream>
#include <cstdio>
using namespace std;

int p[21], n, k;
void f(int number)
{
	if(number==k+1)
	{
		for(int i=1; i<=k; i++)
		{
			printf("%d ", p[i]);
		}
		printf("\n");
		return;
	}
	p[number]=p[number-1]+1;
	for(; p[number]<=n; p[number]++)
	{
		f(number+1);
	}
	return;
}
int main()
{
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	cin>>n>>k;
	f(1);
	
	return 0;	
}
