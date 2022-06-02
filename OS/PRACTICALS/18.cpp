// #include <bits/stdc++.h>
// using namespace std;
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
using namespace std;
int main()
{
    int n, head,total=0;
    int arr[20];
    cout << "enter no of elements";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "enter " << i << " ";
        cin >> arr[i];
    }
    cout << "enter the head";
    cin >> arr[0];
    for (int i = 0; i <= n; i++)
    {
        if ((arr[i] - arr[i + 1]) >= 0)
        {
            total=total+(arr[i] - arr[i + 1]);

        }
        else{
            total=total+(arr[i+1] - arr[i]);
        }
    }
    cout<<total;
}