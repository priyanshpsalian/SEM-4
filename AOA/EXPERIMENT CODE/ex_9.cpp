#include<iostream>
#define s 100
using namespace std;
int main()
{
    int n, i, j, mat[s][s], arr[s], inv=0, num=0, input, row;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>input;
            arr[num++]=input;
            if(arr[num-1]==0)
                row=n-i+1;
        }
    }
    cout<<endl<<num<<endl;
    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if( arr[i]>arr[j] && arr[i]!=0 && arr[j]!=0)
            {
                inv++;
            }
        }
    }
    cout<<"NO of Inversion : "<<inv<<endl;
    if((n%2==1 && inv%2==0) || (n%2==0 && inv%2==1 && row%2==0)|| (n%2==0 && inv%2==0 && row%2==1))
        cout<<"Solve able\n";
    else
        cout<<"Not Possible\n";
}