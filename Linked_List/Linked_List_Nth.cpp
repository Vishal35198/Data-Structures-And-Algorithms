#include<bits/stdc++.h>
struct node{
    int data ;
    struct node* next;
};
node* head;
void insert(int data,int n)
{
    node* temp1=new node();
    temp1->data=data;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;//pointing the next to where the head is 
        head=temp1;//adjusting the new node 
        return ;
    }
    node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;//naye vale to vaha point kiya jaha purana vala jaa raha tha 
    temp2->next=temp1;//piche vale ko refrence diya new se 
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

using namespace std;
int main()
{
    head=NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    print();
    
}