
#include <bits/stdc++.h>
using namespace std;
 
const int N=100005;
 
int n;
int head;
int direction;
int done[N];
int positions[N];
 
void scan(void)
{
    int movement,best,index,complete;
 
    movement = 0;
    complete = 0;
    while(complete < n)
    {
        index = -1;
        if(direction == 0) best = INT_MIN;
        if(direction == 1) best = INT_MAX;
 
        for(int i=0; i<n; i++)
        {
            if(!done[i])
            {
                if(direction == 0 && positions[i] > best && positions[i] < head)
                {
                    index = i;
                    best = positions[i];
                }
                if(direction == 1 && positions[i] < best && positions[i] > head)
                {
                    index = i;
                    best = positions[i];
                }
            }
        }
 
        if(index >= 0)
        {
            complete++;
            done[index] = true;
            movement += abs(head - best);
            head = positions[index];
        }
        else
        {
            direction = 1 - direction;
        }
    }
    cout<<"Total Head Movement "<<movement<<" Cylinders\n";
    return;
}
 
int main()
{
    cout<<"Initial Head Position: ";
    cin>>head;
 
    cout<<"Initial Direction [0/1]: ";
    cin>>direction;
 
    cout<<"Queue Size: ";
    cin>>n;
 
    cout<<"Queue:\n";
    for(int i=0; i<n; i++) cin>>positions[i];
 
    scan();
 
    return 0;
}