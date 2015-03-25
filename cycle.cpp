#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int n, m;
vector < vector<int> > g;
int visited[100001];
bool f=false;
vector<int> c;
size_t ind=0;
int c_start, c_end;

void dfs(int v)
{
    //cout<<v;
    visited[v]=1;
    c.push_back(v);
    for(size_t i=0; i<g[v].size(); i++)
    {
        if(!f)
        {
            if(visited[g[v][i]]==0)
                dfs(g[v][i]);
            if(visited[g[v][i]]==1 && !f)
            {
                f=true;
                c_end = v;
                c_start = g[v][i];
                //cout<<"k";
                return;
            }
        }
    }
    if(!f)
    {
        visited[v]=2;
        c.pop_back();
    }
}

int main ()
{
    freopen("cycle2.in", "rt", stdin);
    freopen("cycle2.out", "wt", stdout);
    scanf("%d%d", &n, &m);
    g.resize(n+1);
    int u, v;
    for(int i=1; i<=m; i++)
    {
        scanf("%d%d", &u, &v);
        g[u].push_back(v);
    }
    for(int i=1; i<=n && !f; i++)
    {
        if(visited[i]==0)
            dfs(i);
    }
    if(!f)
        cout<<"NO";
    else
    {
        cout<<"YES\n";
        for(size_t i=0; i<c.size(); i++)
        {
            if(c[i]==c_start)
            {
                ind=i;
                break;
            }
        }
        for(size_t i=ind; i<c.size(); i++)
        {
            cout<<c[i]<<" ";
        }
    }
    
    return 0;
}
