#include <bits/stdc++.h>

using namespace std;
const int INF = 1e9;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> graph;
    int val;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            temp.push_back(val);
        }
        graph.push_back(temp);
        temp.clear();
    }
    


    vector<vector<int>> dist=graph;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(dist[i][j]>dist[i][k]+dist[k][j]){
                    dist[i][k]=dist[i][j]+dist[j][k];
                }
            }
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}