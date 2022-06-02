#include <bits/stdc++.h>

using namespace std;
const int INF = 1e9;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }
    int src,u,v,w;
    cin >> src;
    dist[src]=0;
    vector<int> dist(n, INF);
    for (int i = 0; i < n - 1; i++)
    {
        for (auto e : edges)
        {
            u = e[0];
            v = e[1];
            w = e[2];
            dist[v] = min(dist[v], dist[u] + w);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dist[i]<<endl;
    }
}