#include <bits/stdc++.h>
#define rep(start,end,i) for(int i=start;i<end;i++)
using namespace std;
int count_prime(int n)
{
    int c=0;
    if(n==2) c++;
    while(n>1)
    {  
        rep(2,n/2,i)
        {
        if(n%i==0)
        {
            c++;
            break;
        }
        }
    n--;

    }

    return c;    

}
int main() {
    // Write C++ code here
    //check wether the Number is prime or not 
    int t;
    cin>>t;
    int ans=count_prime(t);
    cout<<ans<<endl;


    
    return 0;
}