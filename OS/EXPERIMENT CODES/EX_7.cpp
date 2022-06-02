#include <bits/stdc++.h>
using namespace std;
 
const int N=100005;
 
int n;
int head;
int done[N];
int positions[N];
 
void sstf(void)
{
    int movement,shortest,index;
 
    movement = 0;
    for(int i=0; i<n; i++)
    {
        index = 0;
        shortest = INT_MAX;
 
        for(int k=0; k<n; k++)
        {
            if(abs(head - positions[k]) < shortest && !done[k])
            {
                index = k;
                shortest = abs(head - positions[k]);
            }
        }
 
        done[index] = true;
        movement += shortest;
        head = positions[index];
    }
    printf("Total Head Movement %d Cylinders\n",movement);
    return;
}
 
int main()
{
    cout<<"Initial Head Position: ";
    cin>>head;
 
    cout<<"Queue Size: ";
    cin>>n;
 
    cout<<"Queue:\n";
    for(int i=0; i<n; i++) cin>>positions[i];
 
    sstf();
 
    return 0;
}