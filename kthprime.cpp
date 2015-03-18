#include <iostream>
#include <fstream>
#include <math.h>


using namespace std;

int main ()
{
	ifstream in("kthprime.in");
	ofstream out("kthprime.out");
	bool t=true;
	int k;
	in>>k;
	int w=0;
	if(k==1)
		out<<"2";
	else
	{
		if(k==2)
			out<<"3";
		else
		{
			w=2;
			while(t)
			{
				for (int n1=5; w<k; n1+=2)
				{
					long p=n1;
					int max;
					for (int j=3; j<=sqrt(n1); j+=2)
					{
						if (n1%j==0)
						{
							p=0;
							break;
						}
						else
						{
							p = n1;
						}
					}
					if (p!=0)
					{
						w++;
						if(w==k)
						{
							out<<n1;
							t=false;
						}
					}
				}
			}
		}
	}
	
	
	return 0;
}
