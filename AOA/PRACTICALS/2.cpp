#include <iostream>

using namespace std;

int main()
{
    int a,k;
    cout << "Enter the no of elements you want to sort:-";
    cin >> a;
    const int n = a;
    int arr[n];
    cout << "Enter the elements you want to sort:-";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
        // cout<<"At iteration no "<< i+1 << " array elements are :-";
        // for (int k = 0; k < n; k++)
        // {
        //     cout << arr[k]<<" ";
        
        // }
        // cout<<endl;
    }
    cout<<"sorted elements are:-";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << "\n";
    }
}