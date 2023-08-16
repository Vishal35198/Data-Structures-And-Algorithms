#include<bits/stdc++.h>
using namespace std;
/*
Notes:
staring row 
ending col 
ending row 
starting col 
starting row is increased by one 
ending is col is decreased by one 
*/
vector<int> spiral_print(int a[][3],int row,int column)
{
    int start_col=0,start=0,end=row*column;
    int end_col=column-1;
    int start_row=0;
    int end_row=row-1;
    int i,j;
    //row printing 
    vector<int> ans;
    while(start<end)
    {
    for(i=start_col;i<=end_col;i++)
    {
        ans.push_back(a[start_row][i]);
        start++;
    }
    start_row++;
    for(i=start_row;i<=end_row;i++)
    {
        ans.push_back(a[i][end_col]);
        start++;
    }
    end_col--;
    for(i=end_col;i>=start_col;i--)
    {
        ans.push_back(a[end_row][i]);
        start++;
    }
    end_row--;
    for(i=end_row;i>=start_row;i--)
    {
        ans.push_back(a[i][start_col]);
        start++;
    }
    start_col++;
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
    vector<int> s;
    s=spiral_print(arr,3,3);
    int size=s.size();
    for(int i=0;i<size;i++)
    {
        cout<<s[i]<<" ";
    }
    
}