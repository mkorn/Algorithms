#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	int p;
	for (int j=2; j<=sqrt(n); j++)
	{
		if (n%j == 0)
		{
			p = 0;
			break;
		}
		else
		{
			p = n;
		}
	}
	if (p != 0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
