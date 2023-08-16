#include <bits/stdc++.h>
#include <vector>
#define M 1000000007
using namespace std;

void solve()
{
    long long int n;
    cin>>n;
    long long int A[n];
    set<int> s;
    for(auto it:A)
    {
        if(s.find(it)==s.end()) s.insert(it);

    }
    if(s.size()==1)
    {
        cout<<"YES<<"<<endl;
        return;
    }
    for(long long int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    long long int c=0;
    for (long long int i = 0; i < n; i++) {
        for (long long int j = i; j < n; j++) {
            long long int xorResult = (A[i] ^ A[j])%M;

            // Check if xorResult is a palindrome
            long long int num = xorResult;
            long long int reverseNum = 0;
            while (num > 0) {
                reverseNum = (reverseNum * 10) + (num % 10);
                num /= 10;
            }
            if (xorResult == reverseNum) {
                c++;
            }
        }
    }
    cout<<c<<endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
