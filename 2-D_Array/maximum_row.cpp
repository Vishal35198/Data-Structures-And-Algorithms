#include<bits/stdc++.h>
using namespace std;
int max_sum(int a[][3],int row,int column)
{
    int sum=0;
    int ans=0;
    for(int i=0;i<row;i++)
    {
        sum=0;
        for(int j=0;j<column;j++)
        {
            sum+=a[i][j];
        }
        ans=max(ans,sum);
    }
    return ans;
}
int main()
{
    
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }

    }
    cout<<max_sum(arr,3,3)<<endl;
    
    
}