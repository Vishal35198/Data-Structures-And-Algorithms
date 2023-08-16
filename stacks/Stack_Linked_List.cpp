#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head=NULL;
//we will insert the value to the the head 
//as it is O(1)
void push(int x)
{
node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void pop()
{
    if(head==NULL)
    {
        cout<<"Stack underflow "<<endl;
        return ;
    }
    node* temp;
    temp=head;
    head=head->next;
    delete(temp);

}
void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    push(23);
    push(23);
    push(23);
    push(23);
    push(23);
    print();
}