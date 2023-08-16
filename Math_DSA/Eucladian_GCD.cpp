#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    //refer to the theory portion for the GCD Algorithm 
    if(a==0) return b;
    if(b==0) return a;
    while(a!=b)
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a;
}
int main()
{
    //driver Program 
    int c,d;
    cin>>c>>d;
    int ans=gcd(c,d);
    cout<<ans<<endl;
}