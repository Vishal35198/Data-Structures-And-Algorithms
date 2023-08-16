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
void spiral_print(int row,int column)
{
    int a[row][column];
    int start_col=0,start=1,end=row*column;
    int end_col=column-1;
    int start_row=0;
    int end_row=row-1;
    int i,j;
    //row printing 
    while(start<=end)
    {
    for(i=start_col;i<=end_col;i++)
    {
        a[start_row][i]=start++;
        
    }
    start_row++;
    for(i=start_row;i<=end_row;i++)
    {
        a[i][end_col]=start++;

    }
    end_col--;
    for(i=end_col;i>=start_col;i--)
    {
        a[end_row][i]=start++;
    }
    end_row--;
    for(i=end_row;i>=start_row;i--)
    {
        a[i][start_col]=start++;
    }
    start_col++;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
        

    }
    
    
}
int main()
{
    spiral_print(3,3);
}