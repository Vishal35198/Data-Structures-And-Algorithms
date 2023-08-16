#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int start=k+1;
    int end=n-1;
    while(start<=end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
        //increase the pointer by one by one 
    }
    

    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}