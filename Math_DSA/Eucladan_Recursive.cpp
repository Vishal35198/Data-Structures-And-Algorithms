#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,b%a);
}
int main()
{
    int p,q;
    cin>>p>>q;
    int ans=gcd(p,q);
    cout<<ans<<endl;
    
}