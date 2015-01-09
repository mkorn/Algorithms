#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n, m;
int visited[100001];

int dest[100001];
int next[100001];
int head[100001];
int en=1;

void add(int v, int u)
{
	next[en]=head[v];
	dest[en]=u;
	head[v]=en;
	en++;
	return;
}

int t=0;

int head1=0;
int s[100001];
void push(int x)
{
	head1++;
	s[head1]=x;
	
	return;
}
void pop()
{
	if(head!=0)
	{
		cout<<s[head1]<<" ";
		head1--;
	}
	return;
}


void dfs(int start)
{
	visited[start]=1;
	int i=head[start];
	while(i!=0)
	{
		int j=dest[i];
        if(visited[j]==0)
				dfs(j);
		else
		{
			if(visited[j]==1)
			{
				t=1;
				return;
			}
		}
		i=next[i];
	}
	visited[start]=2;
	push(start);
}

int main()
{
  cin>>n>>m;
  int u, v;
  for(int i=1; i<=m; i++)
  {
    cin>>u>>v;
    add(u, v);
  }
  for(int i=1; i<=n; i++)
  {
      if(visited[i]!=2)
          dfs(i);
  }
  if(t==0)
  {
  	for(int i=head1; i>=1; i--)
    {
        pop();
    }
  }
  else
  	cout<<"-1";
    
    return 0;
}
