#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,b;
    cin>>a>>b;
    string s="ABCDEFGH";
    int arr[8]={0,3,1,4,1,5,9,0};
    int m=s.find(a);
    int n=s.find(b);
    int start=min(m,n);
    int end=max(m,n);
    int sum=0,i,ans;
    for(i=start+1;i<=end;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    

}