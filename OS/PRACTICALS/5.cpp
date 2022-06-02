#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
using namespace std;


int main()
{

    int n;
    cout<<"enter no of process";
    cin>>n;
    int m;
    cout<<"enter no of blocks";
    cin>>m;
    int p[20];
    int b[20];
    int allo[200];
    for (int i=0;i<m;i++){
        allo[i]=-1;
    }
    for(int i=0;i<n;i++){
        cout<<"enter process size of"<<i<<" ";
        cin>>p[i];
    }
    for(int i=0;i<m;i++){
        cout<<"enter block size of"<<i<<" ";
        cin>>b[i];
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[j]>=p[i]){
                allo[i]=j;
                b[j]=b[j]-p[i];
                break;
            }
        }
    }
    for (int i=0;i<m;i++){
        cout<<allo[i];
    }












    
    
}