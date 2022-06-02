#include <bits/stdc++.h>
using namespace std;

// int find(int a, int n)
// {
//     for (int i = a + 1; i < n; i++)
//     {
//         if (s.find(arr[i]) == s.end && f.find(arr[i] == f.end()) && f.capacity() < 3)
//         {
//             indexes.push(arr[i]);
//             f.insert(arr[i]);
//         }
//     }
//     return indexes.back();
// }
int main()
{
    int arr[30];
    unordered_set<int> s;
    queue<int> indexes;
    unordered_set<int> f;
    int n, capacity, page_faults = 0, page_hits = 0;

    cout << "enter no of elements";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << " ";
        cin >> arr[i];
    }
    cout << "enter page capacity";
    cin >> capacity;

    for (int i = 0; i < n; i++)
    {
        if (s.size() < capacity)
        {
            if (s.find(arr[i]) == s.end())
            {
                s.insert(arr[i]);
                page_faults++;
                indexes.push(arr[i]);
            }
            else
            {
                page_hits++;
            }
        }
        else
        {
            if (s.find(arr[i]) == s.end())
            {
                for (int j = i+1; j < n; j++)
                {
                    cout<<"kk";
                    if (s.find(arr[j]) != s.end() && f.find(arr[j] )!= f.end() && f.size() < 3)
                    {
                        indexes.push(arr[j]);
                        f.insert(arr[j]);
                    }
                    if(f.size()>=3){
                        break;
                    }
                }
                int val = indexes.front();
                // indexes.pop();
                s.erase(val);
                s.insert(arr[i]);
                // indexes.push(arr[i]);
                page_faults++;
            }
            else
            {
                page_hits++;
            }
        }
    }
    cout << page_faults << endl;
    cout << page_hits << endl;
}
