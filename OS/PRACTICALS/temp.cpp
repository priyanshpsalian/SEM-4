#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int res, pos, k = 0;
    int res2[20], tot[20], trav[20];
    int avai[20];
    int allo[20][20];
    int max[20][20];
    cout << "enter no of resources";
    cin >> res;
    for (int i = 0; i < res; i++)
    {
        cout << "enter total value of resource " << i << " ";
        cin >> res2[i];
        tot[i] = res2[i];
    }
    cout << "enter no of process";
    cin >> pos;
    for (int i = 0; i < pos; i++)
    {
        for (int j = 0; j < res; j++)
        {
            cout << "enter allocated";
            cin >> allo[i][j];
        }
        trav[i] = 0;
    }
    for (int i = 0; i < pos; i++)
    {
        for (int j = 0; j < res; j++)
        {
            res2[i] = res2[i] - allo[i][j];
        }
    }

    for (int i = 0; i < pos; i++)
    {
        for (int j = 0; j < res; j++)
        {
            cout << "enter max need";
            cin >> max[i][j];
        }
    }
    int l = 0, h = 0;
    while (l < pos && h == 0)
    {
        h=1;
        k=0;
        for (int i = 0; i < pos; i++)
        {
            for (int j = 0; j < res; j++)
            {
                if ((max[i][j] - allo[i][j]) <= avai[j] && trav[i] == 0)
                {
                    k++;
                }
                if (k == 3)
                {
                    cout << i << "one" << endl;
                    trav[i] = 1;
                    l++;
                    h=0;
                    for(int b=0;b<res;i++){
                        avai[b]=avai[b]+allo[i][b];
                    }
                }
            }
            k=0;
        }
        
    }
}