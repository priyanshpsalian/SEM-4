// #include <bits/stdc++.h>
// using namespace std;
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, head, total = 0;
    int arr[20];
    cout << "enter no of elements";
    cin >> n;
    int trav[20];
    for (int i = 1; i <= n; i++)
    {
        cout << "enter " << i << " ";
        cin >> arr[i];
        trav[i] = 0;
    }
    cout << "enter the head";
    cin >> arr[0];
    int past = arr[0];
    head = past;
    int len;
    cout<<"enter len";
    cin>>len;
    vector<int> larr;
    vector<int> rarr;
    vector<int> seek;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] <= arr[0])
        {
            larr.push_back(arr[i]);
        }
        else
        {
            rarr.push_back(arr[i]);
        }
    }
    sort(larr.begin(), larr.end());
    sort(rarr.begin(), rarr.end());
    for (int i = 0; i < rarr.size(); i++)
    {

        seek.push_back(rarr[i]);

        if ((rarr[i] - past) >= 0)
        {
            total = total + (rarr[i] - past);
        }
        else
        {
            total = total + (past - rarr[i]);
        }
        trav[i] = 1;
        past = rarr[i];
        cout << i << "is" << total << endl;
    }
    total = total + (past-larr[0]);
    
    past=larr[0];
    for (int i = 1; i <larr.size(); i++)
    {

        seek.push_back(larr[i]);
        if ((larr[i] - past) >= 0)
        {
            total = total + (larr[i] - past);
        }
        else
        {
            total = total + (past - larr[i]);
        }
        past = larr[i];
        trav[i] = 1;
        cout << i << "is" << total << endl;
    }
    
    cout << "is" << total << endl;


    for (int i = 0; i < seek.size(); i++)
    {
        cout << seek[i] << endl;
    }
}
