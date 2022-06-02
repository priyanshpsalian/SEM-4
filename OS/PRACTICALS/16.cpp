#include <iostream>
#include <conio.h>
using namespace std;

void recursivePart(int pages[])
{
    int st, len;
    cout << "Enter the index of the starting block and its length: ";
    cin >> st >> len;
    int k = len;
    if (pages[st] == 0)
    {
        for (int j = st; j < (st + k); j++)
        {
            if (pages[j] == 0)
            {
                pages[j] = 1;
                cout << j << "------>" << pages[j] << endl;
            }
            else
            {
                cout << "The block " << j << " is already allocated" << endl;
                k++;
            }
        }
    }
    else
        cout << "The block " << st << " is already allocated" << endl;
    cout << "Do you want to enter more files?" << endl;
    cout << "Enter 1 for Yes, Enter 0 for No: ";
    int c;
    cin >> c;
    if (c == 1)
        recursivePart(pages);
    else
        exit(0);
    return;
}

int main()
{
    int pages[50], p, a;

    for (int i = 0; i < 50; i++)
        pages[i] = 0;
    cout << "Enter the number of blocks already allocated: ";
    cin >> p;
    cout << "Enter the blocks already allocated: ";
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        pages[a] = 1;
    }

    recursivePart(pages);
    getch();
    return 0;
}