#include<bits/stdc++.h>
using namespace std;
struct node
    {
        int data;
        node* next;
    };
node* head;
void insert(int x)
{
    node* temp=new node();//allocating the memory 
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL) temp->next=head;//next node ko head mein point karwdiya 
    head=temp;//updating the new head to temp 
}
void del(int n) 
{
    node* temp1=head;
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->next;
    }
    node* temp2=temp1->next;//Nth node 
    temp1->next=temp2->next;//n+1 th node ko point kardo 
    delete(temp2);
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
    head=NULL;
    cout<<"How many Numbers "<<endl;
    int n,i,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Number "<<endl;
        cin>>x;
        insert(x);
        print();
    }
    del(4);
    print();
    //make two function for printing and for inserting 
    //into the linked list at first position 



}