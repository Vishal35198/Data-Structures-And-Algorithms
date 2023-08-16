#include<bits/stdc++.h>
using namespace std;
pair<int,int> bs_2d(int arr[][3],int row,int column,int target)
{
    //row_in _2D=start/row 
    //column_in_2D=start%column
    pair<int,int> p;
    int start=0,end=row*column-1;
    int mid=(start+(end-start)/2);
    int i=0;
    int j=0;
    // p.first=i;
    // p.second=j;
    while(start<end)
    {
        // cout<<"while"<<" ";
        i=mid/row;
        j=mid%column;
        if(arr[i][j]==target) 
        {
            p.first=i;
            p.second=j;
            return p;
        }
        else if(arr[i][j]>target) end=mid-1;
        else start=mid+1;
        mid=(start+(end-start)/2);

    }
    return p;
}
int main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    pair<int,int> ans;
    ans=bs_2d(a,3,3,9);
    cout<<ans.first<<" "<<ans.second<<endl;
}