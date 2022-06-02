#include <bits/stdc++.h>

using namespace std;
const int INF = 1e9;
int h = 100;
int val[20];
int wei[20];
int rto[20];
int rto1[20];

int index1 = 100000;
int find(int n, int m)
{
    int less = -1;
    for (int i = 0; i < n ; i++)
    {
        if (rto1[i] > less)
        {
            less = rto1[i];
            index1 = i;
            
        }
    }

    rto1[index1] = -100;
    return index1;
}
int main()
{
    int n, m;
    cin >> n >> m;

    int total_val = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i] >> wei[i];
        rto[i] = val[i] / wei[i];
        rto1[i] = val[i] / wei[i];
    }
    for (int i = 0; i < n; i++)
    {
        int l = find(n, m);
        cout<<l<<"l"<<endl;
        if (wei[l] <= m)
        {
            m = m - wei[l];
            total_val = total_val + val[l];
            cout<<total_val<<"total_val"<<endl;
        }
        else
        {
            int rat = val[l] / wei[l];
            total_val = total_val + (rat * m);
            cout<<total_val<<"total_val"<<endl;
           
        }
    }
    cout << total_val;
}
