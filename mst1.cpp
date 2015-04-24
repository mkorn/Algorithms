/*
Нахождение минимального остова/каркаса алгоритмом Прима
*/
#include <iostream>
#include <set>
#include <vector>
#include <cstdio>

using namespace std;

const int MAX = 20001;
const int INF = 2000000001;
int n;
vector < vector < pair<int,int> > > g(MAX+1);
vector<int> D(MAX, INF);

int main()
{
    int m, s=0;
    scanf("%d%d", &n, &m);
    int u, v, w;
    for(int i=0; i<m; i++)
    {
        scanf("%d%d%d", &u, &v, &w);
        g[u].push_back(pair<int, int>(v, w));
        g[v].push_back(pair<int, int>(u, w));
    }
    vector <int> d(n+1, INF), used(n+1, 0);
    d[1]=0;
    set < pair<int, int> > q;
    q.insert(pair <int, int>(0, 1));
    for(int i=1; i<=n; i++)
    {
      if(!q.empty())
      {
          int v=q.begin()->second;
          q.erase(q.begin());
          used[v]=1;
          for(size_t j=0; j<g[v].size(); j++)
          {
              int to=g[v][j].first;
              int len=g[v][j].second;
              if(len<d[to] && used[to]!=1)
              {
                  if(d[to]!=INF)
                      s-=d[to];
                  q.erase(make_pair(d[to], to));
                  d[to] = len;
                  s+=d[to];
                  q.insert(make_pair(d[to], to));
              }
          }
      }
    }
	  cout<<s;

    return 0;
}
