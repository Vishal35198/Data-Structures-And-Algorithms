
#include <iostream>
#include<stack>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head=NULL;
void insert(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
};
void print()
{
    node* temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
}
stack <node*>s;
void reverse()
{
    node* temp2;
    temp2=head;
    while(temp2->next!=NULL)
    {
        s.push(temp2->next);
        temp2=temp2->next;
    }
    head=s.top();
    s.pop();
    while(!s.empty())
    {
        temp2->next=s.top();
        s.pop();
        temp2=temp2->next;
    }
    temp2->next=NULL;
}
int main()
{
    insert(34);
    insert(56);
    insert(12);
    insert(23);
    insert(98);
    print();
    reverse();
    cout<<"\n";
    print();

    return 0;
}