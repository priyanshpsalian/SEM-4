#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, capacity, page_faults = 0,page_hits=0;
    int arr[30];
    cout << "enter no of elements";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << " ";
        cin >> arr[i];
    }
    cout << "enter page capacity";
    cin >> capacity;
    unordered_set<int> s;
    queue<int> indexes;
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
        else{
            if(s.find(arr[i])==s.end()){
                int val=indexes.front();
                indexes.pop();
                s.erase(val);
                s.insert(arr[i]);
                indexes.push(arr[i]);
                page_faults++;

            }
            else{
                page_hits++;
            }
        }
    }
    cout<<page_faults<<endl;
    cout<<page_hits<<endl;
}
