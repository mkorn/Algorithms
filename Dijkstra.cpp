#include <iostream>
#include <set>
#include <vector>
#include <cstdio>
using namespace std;
 
const int MAX = 100001;
const int INF = 2000000001;
int n;
vector < vector < pair<int,int> > > G(MAX+1);
vector<int> D(MAX, INF);
 
void Dijkstra(int s)
{
    set< pair<int, int> > q;
    D[s] = 0;
    q.insert(pair<int, int>(D[s], s));
    while(!q.empty())
    {
        int v=q.begin()->second;
        int d=q.begin()->first;
        q.erase(q.begin());
        for(size_t j=0; j<G[v].size(); j++)
        {
        	int to=G[v][j].first;
        	int len=G[v][j].second;
        	if(D[v]+len<D[to])
        	{
        		q.erase(make_pair(D[to], to));
				D[to] = D[v] + len;
				q.insert(make_pair(D[to], to));
        	}
        }
    }
}
 
int main()
{
    int m, s;
    scanf("%d %d %d", &n, &m, &s);
    for (int i = 0; i < m; i++)
    {
        int u, v, w = 0;
        scanf("%d %d %d", &u, &v, &w);
        G[u].push_back(pair<int, int>(v, w));
    }
    Dijkstra(s);
	for(int t=1; t<=n; t++)
	{
		if(D[t]!=INF)
			printf("%d ", D[t]);
		else
			printf("-1 ");
	}
 
    return 0;
}
