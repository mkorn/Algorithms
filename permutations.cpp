/* Генерация всех перестановок */
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int p[10], used[10], n;
void f(int number)
{
	if(number==n+1)
	{
		for(int i=1; i<=n; i++)
		{
			printf("%d ", p[i]);
		}
		printf("\n");
		return;
	}
	for(int i=1; i<=n; i++)
	{
		if(used[i]==0)
		{
			used[i]=1;
			p[number]=i;
			f(number+1);
			used[i]=0;
		}
	}
	return;
}
int main()
{
	//freopen("permutations.in", "rt", stdin);
	//freopen("permutations.out", "wt", stdout);
	cin>>n;
	f(1);
	
	return 0;	
}
