#include<iostream>
using namespace std;
int binary(int arr[],int key,int n)
{
    int s=0;
    int e=n-1;
    int mid =(s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key ) return mid;
        else if(arr[mid]>key) e=mid-1;
        else s=mid+1;
        mid=(s+e)/2;
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key=8;
    int n=10;
    cout<<binary(arr,key,n);
}