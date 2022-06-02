#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{

    int n;
    cout << "enter no of process";
    cin >> n;
    int m;
    cout << "enter no of blocks";
    cin >> m;
    int p[20];
    int b[20];
    int allo[200];
    for (int i = 0; i < m; i++)
    {
        allo[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "enter process size of" << i << " ";
        cin >> p[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << "enter block size of" << i << " ";
        cin >> b[i];
    }
    int dif = 10000, indb = 0, indp = 0;
    for (int i = 0; i < n; i++)
    {
        dif = 10000;
        for (int j = 0; j < m; j++)
        {
            if (b[j] >= p[i] && dif > (b[j] - p[i]))
            {
                dif = b[j] - p[i];
                indp = i;
                indb = j;
            }
        }
        allo[indp] = indb;
        b[indb] = b[indb] - p[indp];
    }
    for (int i = 0; i < m; i++)
    {
        cout << allo[i];
    }
}