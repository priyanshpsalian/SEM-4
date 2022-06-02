#include <iostream>
#include <vector>
using namespace std;
 
// Returns true if there exists a subsequence of `A[0…n]` with the given sum
bool subsetSum(vector<int> const &A, int n, int k)
{
    // return true if the sum becomes 0 (subset found)
    if (k == 0) {
        return true;
    }
 
    // base case: no items left, or sum becomes negative
    if (n < 0 || k < 0) {
        return false;
    }
 
    // Case 1. Include the current item `A[n]` in the subset and recur
    // for the remaining items `n-1` with the remaining total `k-A[n]`
    bool include = subsetSum(A, n - 1, k - A[n]);
 
    // Case 2. Exclude the current item `A[n]` from the subset and recur for
    // the remaining items `n-1`
    bool exclude = subsetSum(A, n - 1, k);
 
    // return true if we can get subset by including or excluding the
    // current item
    return include || exclude;
}
 
 
// Subset Sum Problem
int main()
{
     int k ,n;
     cout<<"Enter the size of array:- ";
    cin>>n;
    cout<<"Enter the sum:- ";
    cin>>k;
    cout<<"Enter the set of items:- ";

    vector<int> A(n,0);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
   
 
    

 

  
 
    if (subsetSum(A, n - 1, k)) {
        cout << "Subsequence with the given sum exists";
    }
    else {
        cout << "Subsequence with the given sum does not exist";
    }
 
    return 0;
}