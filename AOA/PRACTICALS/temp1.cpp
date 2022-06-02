#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    void solve(int ind, vector<int> &arr, int n, vector<int> &ans, int sum,queue<int>q,int sum1)
    {
        // cout<<sum;
        // cout<<"K";
        if (sum == sum1)
        {
            for (int i = 0; i < q.size(); i++)
            {
                cout<<q.front();
                q.pop();
                /* code */
            }
            
            ans.push_back(sum);
            return;
        }
        
        q.push(ind);
        sum=sum + arr[ind];
        // element is picked
        // sum1=sum1+arr[ind];
        solve(ind + 1, arr, n, ans, sum ,q,sum1);
        solve(ind + 1, arr, n, ans, sum,q,sum1);
        // element is not picked
        
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int> ans;
        queue<int>q;
        solve(0, arr, n, ans, 0,q,3);
        return ans;
    }
};

int main()
{
    vector<int> arr{3, 1, 2};
    Solution ob;
    vector<int> ans = ob.subsetSums(arr, arr.size());
    sort(ans.begin(), ans.end());
    cout << "The sum of each subset is " << endl;
    for (auto sum : ans)
    {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}