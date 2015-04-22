#include <iostream>
#include <fstream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
	ifstream in("circles.in");
	ofstream out("circles.out");
	int n;
	in>>n;
	int x1, y1, r1, x2, y2, r2;
	while(n!=0)
	{
		in>>x1>>y1>>r1>>x2>>y2>>r2;
		if(x1==x2 && y1==y2)
		{
			if(r1==r2)
				out<<"I can't count them - too many points :("<<"\n\n";
			else
				out<<"There are no points!!!"<<"\n\n";
		}
		else
		{
			x2 -=x1;
			y2 -=y1;
			double a=-2*x2, b=-2*y2, c=x2*x2+y2*y2+r1*r1-r2*r2;
			double x0 = -a*c/(a*a+b*b), y0 = -b*c/(a*a+b*b);
			if (c*c > r1*r1*(a*a+b*b)+0.0000001)
				out<<"There are no points!!!"<<"\n\n";
			else if (fabs(c*c - r1*r1*(a*a+b*b))<0.0000001)
			{
				out<<"There are only 1 of them...."<<"\n";
				out<<setprecision(6)<<fixed<<x0+x1<<" "<<y0+y1<<"\n\n";
			}
			else
			{
				double d = r1*r1 - c*c/(a*a+b*b);
				double mult = sqrt(d/(a*a+b*b));
				double ax,ay,bx,by;
				ax = x0 + b*mult;
				bx = x0 - b*mult;
				ay = y0 - a*mult;
				by = y0 + a*mult;
				out<<"There are only 2 of them...."<<"\n";
				if(ax<bx)
					out <<setprecision(6)<<fixed<<ax+x1<<" "<<ay+y1<<"\n"<<bx+x1<<" "<<by+y1<<"\n\n";
				else
				{
					if(fabs(bx-ax)<0.0000001)
					{
						if(ay<by)
							out <<setprecision(6)<<fixed<<ax+x1<<" "<<ay+y1<<"\n"<<bx+x1<<" "<<by+y1<<"\n\n";
						else
							out <<setprecision(6)<<fixed<<bx+x1<<" "<<by+y1<<"\n"<<ax+x1<<" "<<ay+y1<<"\n\n";
					}
					else
						out <<setprecision(6)<<fixed<<bx+x1<<" "<<by+y1<<"\n"<<ax+x1<<" "<<ay+y1<<"\n\n";
				}
			}
		}
		n--;
	}

	
	return 0;
}
