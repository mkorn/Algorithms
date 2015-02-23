#include <iostream>
using namespace std;

int n;
int head=0;
int s[1001];

void push(int x)
{
	head++;
	s[head]=x;
	
	return;
}
void pop()
{
	if(head!=0)
	{
		cout<<s[head]<<"\n";
		head--;
	}
	return;
}

int main ()
{
	cin>>n;
	int t;
	for(int i=0; i<n; i++)
	{
		cin>>t;
		if(t>0)
			push(t);
		else
			pop();
	}
	
	return 0;
}
