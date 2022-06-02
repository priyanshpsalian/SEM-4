#include <bits/stdc++.h>
#define N 1000

using namespace std;

int dp[N][N];
int lcs(string &s1, string &s2, int n, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;


        
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if (s1[n - 1] == s2[m - 1])
    {
        dp[n][m] = 1 + lcs(s1, s2, n - 1, m - 1);
    }
    else
    {
        dp[n][m] = max(lcs(s1, s2, n - 1, m), lcs(s1, s2, n, m - 1));
    }
    return dp[n][m];
}
int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dp[i][j] = -1;
            /* code */
        }
    }
    string s1;
    string s2;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();
    cout << "Length of LCS is " << lcs(s1, s2, n, m) << endl;


    
    //For printing the LCS
    int i = n, j = m;
    int index = dp[n][m];

    // Create a character array to store the lcs string
    char lcs[index + 1];
    lcs[index] = '\0';
    while (i > 0 && j > 0)
    {
        // If current character in X[] and Y are same, then
        // current character is part of LCS
        if (s1[i - 1] == s2[j - 1])
        {
            lcs[index - 1] = s1[i - 1]; // Put current character in result
            i--;
            j--;
            index--; // reduce values of i, j and index
        }

        // If not same, then find the larger of two and
        // go in the direction of larger value
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }
    cout << "LCS is " << lcs;
}