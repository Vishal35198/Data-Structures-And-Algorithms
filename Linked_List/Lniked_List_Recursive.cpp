#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head=NULL;
void insert(int x )
{
    node* temp=new node();
    temp->data=x;
    temp->next=NULL;
    temp->next=head;
    head=temp;
}
void print(node* p)
{
    if(p==NULL) 
    {
        cout<<"\n";
        return ;
    }
    cout<<p->data<<" ";
    print(p->next);
}
void reverse_print(node* p)
{
    if(p==NULL) 
    {
        return ;
    }
    print(p->next);
    cout<<p->data<<" ";
}
int main()
{
    insert(34);
    insert(45);
    insert(78);
    insert(23);
    insert(89);
    print(head);
    reverse_print(head);
}