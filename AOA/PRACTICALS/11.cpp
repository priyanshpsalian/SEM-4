#include <bits/stdc++.h>
using namespace std;

bool canPlace(vector<vector<char>> mat, int r, int c)
{
    int N = mat.size();
    // checking for rows
    for (int i = 0; i < r; i++)
    {
        if (mat[i][c] == 'Q')
        {
            return false;
        }
    }
    // checking for cols
    for (int i = r, j = c; i >= 0 && j >= 0; i--, j--)
    {
        if (mat[i][j] == 'Q')
        {
            return false;
        }
    }
    // checking for diagonals
    for (int i = r, j = c; i >= 0 && j < N; i--, j++)
    {
        if (mat[i][j] == 'Q')
        {
            return false;
        }
    }
    // if no queen affects this one, then return true
    return true;
}

void print(vector<vector<char>> mat)
{
    int N = mat.size();
    for (int i = 0; i < N; i++)
    {
        cout << " __";
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "|" << mat[i][j] << '_';
        }
        cout << "|" << endl;
    }
    cout << "\n\n";
}

void nQueen(vector<vector<char>> mat, int r)
{
    int N = mat.size();
    if (r == N)
    {
        print(mat);
        return;
    }
    for (int i = 0; i < N; i++)
    {
        if (canPlace(mat, r, i))
        {
            mat[r][i] = 'Q';
            nQueen(mat, r + 1);
            mat[r][i] = '_';
        }
    }
}

int main()
{
    cout << "Enter number of queens:\n";
    int n;
    cin >> n;
    cout << endl;
    vector<vector<char>> mat(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = '_';
        }
    }
    nQueen(mat, 0);
    return 0;
}