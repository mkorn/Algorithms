#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int x1, y1, x, y;
	scanf("%d%d%d%d", &x1, &y1, &x, &y);
	long long A=-x, B=-y, C=-A*x1-B*y1;
	printf("%lld %lld %lld", A, B, C);
	
	return 0;
}
