/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    // 2 3 * 5 4 * 9 -
    // either operator or operand 
    string expi="23*54*9-";
    stack<int> s;
    int a,b;
    for(int i=0;i<expi.length();i++)
    {
        if(expi[i]=='+' || expi[i]=='-' || expi[i]=='*' ||  expi[i]=='/')
        {
            int var2=s.top();
            s.pop();
            int var1=s.top();
            s.pop();
            if(expi[i]=='+')
            {
                int answer=var1+var2;
                s.push(answer);
            }
            else if(expi[i]=='-')
            {
                int answer=var1-var2;
                s.push(answer);
            }
            else if(expi[i]=='*')
            {
                int answer=var1*var2;
                s.push(answer);
            }
            else if (expi[i]=='/')
            {
                int answer=var1/var2;
                s.push(answer);
            }
        }
        else 
        {
            // string op=expi[i];
            // a=stoi(op);
            // s.push(a);
        }
    }
     int ans=s.top();
     cout<<ans<<endl;

    return 0;
}