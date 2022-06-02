#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 6;
vector<int> parent(N);
vector<int> sz[N];
void make_set(int v)
{
    parent[v] = v;
    sz[v] = 1;
}
int find_set(int v)
{
    if (parent[v] == v)
    {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}
void union(int u, int v)
{
    int a = find_set(u);
    int b = find_set(v);
    if (sz[a] < sz[b])
    {
        swap(a, b);
    }
    parent[b] = a;
    sz[a] += sz[b];
}
int main()
{
    for (int i = 0; i < N; i++)
    {
        make_set(i);
    }
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }
    sort(edges.begin(), edges.end());
    int cost;
    for (auto i : edges)
    {
        int u = i[0];
        int v = i[1];
        int w = i[2];
        int x = find_set(u);
        int y = find_set(v);
        if (x == y)
        {
            continue;
        }
        else
        {
            cout << u << " " << w << endl;
            cost += w;
            union(u, v);
        }
    }
    cout << cost;
}