#include <bits/stdc++.h>
using namespace std;
int val[20];
int wei[20];
int max(int a, int b) { return (a > b) ? a : b; }
int find(int n, int m, int total[])
{
    if (n == 0 || m == 0)
    {
        return 0;
    }

    if (wei[n - 1] > m)
    {
        return find(n - 1, m, total);
    }
    else
    {
        return max(val[n - 1] + find(n - 1, m-wei[n-1], total), find(n - 1, m, total));
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int total_val = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i] >> wei[i];
    }
    cout<<find(n, m, wei);
}