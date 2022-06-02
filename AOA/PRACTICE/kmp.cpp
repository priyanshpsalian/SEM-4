#include <bits/stdc++.h>

using namespace std;
vector<int> prefix_function(string s)
{
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}
int main()
{
    string s;
    cin >> s;
    vector<int> prefix = prefix_function(s);
    for (auto i : prefix)
    {
        cout << i << " ";
    }
    cout << "\n";
    string t;
    cin >> t;
    int pos = -1;
    int i = 0;
    int j = 0;
    while (i < t.size())
    {
        if (t[i] == s[j])
        {
            j++;
            i++;
        }
        else
        {
            if (j != 0)
            {
                j = prefix[j - 1];
            }
            else
            {
                i++;
            }
        }
        if (j == s.size())
        {
            pos = i - s.size();
            break;
        }
    }
    cout << pos;
}

