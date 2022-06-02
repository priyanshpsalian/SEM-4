#include <bits/stdc++.h>
//correct ans not coming as output
using namespace std;
const int N = 1e5 + 6;
int Cur_weight=0, Final_val=0;
struct item
{
   int value, weight;
};
bool cmp(item a, item b)
{
   double r1 = (double)a.value / a.weight;
   double r2 = (double)b.value / b.weight;
   return (r1 > r2);
}
double fractionalknapsack(item A[], int Total_Capacity, int n)
{
   sort(A, A + n, cmp);
   int cur_weight = 0;
   double final_val = 0.0;
   for (int i = 0; i < n; i++)
   {
      if (cur_weight + A[i].weight <= Total_Capacity)
      {
         Cur_weight += A[i].weight;
         Final_val += A[i].value;
      }
      else
      {
         int remain = Total_Capacity - cur_weight;
         Final_val += A[i].value * ((double)remain / A[i].weight);
      }
   }
   return final_val;
}
int main()
{
   item A[N];
   int n, Total_Capacity;
   cout<<"Enter total capacity:- ";
   cin>>Total_Capacity;
   cout << "Enter the lenght of array elements:- ";
   cin >> n;

   cout << "Enter the array elements:- ";
   for (int i = 0; i < n; i++)
   {
      cin >> A[i].value;
      cin>>A[i].weight;
   }
   cout<<fractionalknapsack(A, Total_Capacity, n);

}