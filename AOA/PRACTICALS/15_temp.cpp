#include <bits/stdc++.h>
#define sp ' '
#define ln '\n'
#define fs first
#define sc second
const int px[8] = {0, 0, -1, 1, -1, -1, 1, 1};
const int py[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
using namespace std;

int main(void)
{
    string a, b;
    cout << "Enter text:\n";
    cin >> a;
    cout << "Enter pattern:\n";
    cin >> b;
    int n = a.size(), m = b.size();
    vector<int> pi(m + 1, 0);
    int i = 0, j = 1;
    while (j < m)
    {
        if (b[i] == b[j])
        {
            pi[j + 1] = pi[j] + 1;
            i++;
            j++;
        }
        else
        {
            i = 0;
            j++;
        }
    }
    i = 0;
    j = 0;
    while (i != n)
    {
        if (j == m - 1)
        {
            cout << "Found at position " << i - j + 1 << ln;
        }
        if (a[i] == b[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = pi[j + 1];
        }
    }
}