#include <bits/stdc++.h>
#define N 1000
int dp[N][N];
using namespace std;
int lcs(string &s1, string &s2, int n, int m)
{
    if(n==0||m==0){
        return 0;
    }
    if(dp[n][m]!=0){
        return dp[n][m];
    }
    if(s1[n-1]==s2[m-1]){
        dp[n][m]=1+lcs(s1,s2,n-1,m-1);
    }
    else{
        dp[n][m]=max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
    }


}
int main(){
    i=n;
    j=m;
    while(i>0&&j>0){
        if(s1[i-1]==s2[j-1]){
            char[index]=s1;
            i--;j--;index++;

        }
        else if(dp[i][j-1]>dp[i-1][j-1]){
            j--;


        }

    }
}