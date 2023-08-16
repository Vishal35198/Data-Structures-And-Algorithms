#include<bits/stdc++.h>
using namespace std;
struct node
    {
        int data;
        node* next;
    };
int main()
{
    node* head;//head
    head=NULL;
    node* temp=new node();//creating the temp with new node 
    //assigning the data as 2 and address to null previous pointer 
    temp->data=2;
    temp->next=NULL;
    // head=temp;
    node* temp2=temp->next;
    temp=new node();
    temp->data=4;
    temp->next=NULL;
    node* temp1=head;
    while(temp1->next!=NULL)//NULL means the last number 
    {
        cout<<temp->data<<" ";
        temp1=temp1->next;
    }
}