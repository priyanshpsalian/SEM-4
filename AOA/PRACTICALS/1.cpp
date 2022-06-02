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
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        // cout<<"At iteration no "<< i+1 << " array elements are :-";
        // for (int k = 0; k < n; k++)
        // {
        //     cout << arr[k]<<" ";
        
        // }
        // cout<<endl;
    }
    cout << "Elements in sorted order are as follows:-";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << "\n";
    }
}