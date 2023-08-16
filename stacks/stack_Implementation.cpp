/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#define max_size 5
using namespace std;
int A[max_size];
int top=-1;
void push(int x)
{
    if(top==max_size-1) 
    {
        cout<<"STACK OVERFLOW";
        return ;
    }
    A[++top]=x;
    
}
void pop()
{
    if(top==-1)
    {
        cout<<"STack underflow";
        return ;
    }
    cout<<A[top];
    top--;
}
void Top()
{
    cout<<A[top];
}
void print()
{
    for(int i=0;i<top;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    push(45);
    push(67);
    push(12);
    push(28);
    push(4);
    print();

    return 0;
}