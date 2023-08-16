#include<bits/stdc++.h>
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


}
node* reverse(node* head)
{
    node* current,*prev,*next;
    current =head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;//previous ko age lana hai 
        current=next;//current ko age lana hai 
    }
    head=prev;//very important prev is pointing to the head because now 
    //last is the head 
    return head;
}
void print(node* head)
{
    node* temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
}
int main()
{
    insert(4);
    insert(10);
    insert(11);
    insert(28);
    print(head);cout<<"\n";
    head=reverse(head);
    print(head);


}