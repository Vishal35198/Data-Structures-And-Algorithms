#include <bits/stdc++.h>
#define rep(start,end,i) for(int i=start;i<end;i++)
using namespace std;
int sieve(int n)
{ 
    //Mark each Number as prime first means set bool_value to 1
    //then move on to the Number and make each number in its table to false
    // only increase the count in true value 
    int cnt=0;
    vector<bool> prime (n+1,true);
    prime[0]=prime[1]=0;
    rep(2,n,i)
    {
        if(prime[i]) //checking whether is prime or not by true value 
        {
            cnt++;//increasing the counter to the one 
            for(int j=2*i;j<n;j+=i)//looping through the table 
           {
            prime[j]=false;//setting the value to the false 
            }
        }
    } 
    return cnt;
}
int main() {
    int t;
    cin>>t;
    int ans=sieve(t);
    cout<<ans<<endl;
    return 0;
}