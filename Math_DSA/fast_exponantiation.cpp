#include<bits/stdc++.h>
using namespace std;
//calculate the fast exponents of a x^n mod m
int fast_expo(int x,int n,int m)
{
    int res=1;
    while(n>0)
    {
        if(n&1)
        {
            //odd
            res=((res)%m * (x%m))%m;//when it is odd we multiply by x

        }
        x=((x%m)%m * (x%m)%m)%m;//then we half it 
        n=n>>1; //n=n/2;
    }
    return res;
    
}
int main()
{
    cout<<fast_expo(7,2,10);
}
