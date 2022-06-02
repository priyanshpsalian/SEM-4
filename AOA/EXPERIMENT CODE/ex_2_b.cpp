#include <stdio.h>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/* function that consider last element as pivot,
place the pivot at its exact position, and place
smaller elements to left of pivot and greater
elements to right of pivot.  */
int partition(int a[], int start, int end)
{
    int pivot = a[end]; // pivot element
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++)
    {
        // If current element is smaller than the pivot
        if (a[j] < pivot)
        {
            i++; // increment index of smaller element
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    int t = a[i + 1];
    a[i + 1] = a[end];
    a[end] = t;
    return (i + 1);
}

/* function to implement quick sort */
void quick(int a[], int start, int end, int n) /* a[] = array to be sorted, start = Starting index, end = Ending index */
{
    if (start < end)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
                }
        printf("\n");

        int p = partition(a, start, end); // p is the partitioning index
        quick(a, start, p - 1, n);
        quick(a, p + 1, end, n);

        printf("\n");
    }
}

/* function to print an array */
void printArr(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int a;
    cout << "Enter the no of elements you want to sort:-";
    cin >> a;
    const int n = a;
    int arr[n];
    cout << "Enter the elements you want to sort:-";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printf("Before sorting array elements are - \n");
    printArr(arr, a);
    printf("The array at each iteration will look like");
    quick(arr, 0, a - 1, a);
    printf("\nAfter sorting array elements are - \n");
    printArr(arr, a);

    return 0;
}