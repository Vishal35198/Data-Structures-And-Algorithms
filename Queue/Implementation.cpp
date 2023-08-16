#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* front=NULL;
node* rear=NULL;
void enqueue(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=temp;
        return ;
    }
    rear->next=temp;
    rear=temp;

}
void dequeue()
{
    node* temp=front;
    front=front->next;
    delete temp;
}
void print()
{
    node* temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
int main()
{
    enqueue(34);
    enqueue(12);
    enqueue(90);
    enqueue(8);
    print();
    dequeue();
    print();
}