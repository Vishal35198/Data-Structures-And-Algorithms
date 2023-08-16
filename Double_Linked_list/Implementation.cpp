#include<bits/stdc++.h>
using namespace std;
//Implement the double linked list 
// using structure 
struct node
{
    int data;
    node* next;
    node* prev;

};
node* head=NULL;
node* get_new_node(int x )
{
    node* temp=new node();
//allocating the memory dynamically why?
//because if memory is allocated in the stack then it will 
//vanish as soon as function return and closes 
    temp->data=x;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}
void Insert_at_Head(int x)
{
    node* current=get_new_node(x);
    if(head==NULL)
    {
        head=current;//making head point to current 
        return;
    }
    head->prev=current;//previous ko current mein point 
    current->next=head;//current ke next ko head mein 
    head=current;//or head ko kardo update 
}
void Insert_at_Nth(int n,int x)
{
    node* current=get_new_node(x);
    node* previous=head;
    for(int i=0;i<n-2;i++)
    {
        previous=previous->next;
    }
    node* nth=previous->next;
    previous->next=current;
    current->prev=previous;
    current->next=nth;
    nth->prev=current;
    // head=current;
}
void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"----->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
void reverse_print()
{
    node* temp=head;
    while(temp->next!=NULL)//reaching to the NULL pointer just before it 
    {
        temp=temp->next;
        //using temp to point to the next 
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<"----->";
        temp=temp->prev;
    }
    cout<<"NULL\n";
}
void del(int n)
{
    node* temp=head;
    if(n==1)
    {
        head=temp->next;
        delete(temp);
        return ;
    }
    for(int i=0;i<n-2;i++)
    {
        temp=temp->next;
        //moving temp
    }
    node* nth=temp->next;
    node* n1th=nth->next;
    temp->next=nth->next;
    nth->prev=temp;
    delete(nth);
}
int main()
{
    Insert_at_Head(23);
    Insert_at_Head(34);
    Insert_at_Head(12);
    Insert_at_Head(90);
    Insert_at_Head(41);
    Insert_at_Head(99);
    Insert_at_Nth(3,5);
    // cout<<"Print : ";
    print();
    del(2);
    print();
}