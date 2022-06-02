// TUTORIAL VIDEO LINK:-NOT FOUND PLZ UNDERSTAND IT HARD
// CODE LINK:-https://classnotescseit.blogspot.com/2018/02/write-c-programs-to-simulate-paging.html
#include <stdio.h>
#define MAX 50
int main()
{
    int page[MAX], i, n, f, ps, off, pno;
    int choice = 0;
    printf("\nEnter the no of  pages in memory: ");
    scanf("%d", &n);
    printf("\nEnter page size: ");
    scanf("%d", &ps);
    printf("\nEnter no of frames: ");
    scanf("%d", &f);
    for (i = 0; i < n; i++)
        page[i] = -1;
    printf("\nEnter the page table\n");
    printf("(Enter frame no as -1 if that page is not present in any frame)\n\n");
    printf("\npageno\tframeno\n-------\t-------");
    for (i = 0; i < n; i++)
    {
        printf("\n\n%d\t\t", i);
        scanf("%d", &page[i]);
    }
    do
    {
        printf("\n\nEnter the logical address(i.e,page no & offset):");
        scanf("%d%d", &pno, &off);
        if (page[pno] == -1)
            printf("\n\nThe required page is not available in any of frames");
        else
            printf("\n\nPhysical address(i.e,frame no & offset):%d,%d", page[pno], off);
        printf("\nPress 1 to continue or press 0 to exit:- ");
        scanf("%d", &choice);
    } while (choice == 1);
    return 1;
}