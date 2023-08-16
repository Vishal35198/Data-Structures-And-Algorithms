#include<bits/stdc++.h>
using namespace std;
bool is_present(int a[][3],int target,int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(a[i][j]==target) 
            {
                return 1;
            }

        }
    }
    return 0;
}
int main()
{
    int arr[3][3];
    //creating h\the array with the two rpw and column beautiful

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }

    }
    if(is_present(arr,5,3,3)==1) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
    
}