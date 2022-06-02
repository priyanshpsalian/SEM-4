#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, head, total = 0, bs, ebs;
    int arr[20];
    cout << "enter total block size";
    cin >> bs;
    cout << "enter size of each block";
    cin >> ebs;
    cout << "enter no of processes";
    cin >> n;
    int no = bs / ebs;
    cout << "no of blocks are" << no << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "enter size of process no  " << i << " ";
        cin >> arr[i];
    }
    int p = 0, count = 0, iternal = 0, external = 0;
    cout << "\n\nPROCESS\tMEMORY REQUIRED\t ALLOCATED\tINTERNAL FRAGMENTATION" << endl;
    for (int i=0;i<n;i++)
    {
        if (p < no && arr[i] < ebs)
        {
            cout << i << "\t" << arr[i] << "\t\t" << "YES" << "\t" << ebs - arr[i] << endl;
            iternal = iternal+ebs - arr[i];

            p++;
            count++;
        }
        else{
            cout << i << "\t" << arr[i] << "\t\t" << "NO" << "\t" << ebs - arr[i] << endl;
        }
    }
    cout<<iternal;
}