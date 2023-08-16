#include<bits/stdc++.h>
using namespace std;
// Recursive Functions 
//                      2
//             3               4
//         5       6       7       8
//Example of a Binary tree 
struct bstnode
{
    int data;
    bstnode* left;
    bstnode* right;
};
//function to create a new node in the heap 
bstnode* getnewnode(int data )//function to get a newnode 
{
    bstnode* newnode=new bstnode();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
//To insert the data into the BST and return address o root node
bstnode* insert(bstnode* root,int data)
{
    if(root=NULL)//Empty tree
    {
        root=getnewnode(data);
    }
    //if data to be inserted is lesser than the current root
    else if(data<=root->data)
    {
        root->left=insert(root->left,data);
    }
    else 
    {
        root->right=insert(root->right,data);
    }
    return root;
}
bool bstsearch(bstnode* root,int x )//recursive function 
{
    if(root==NULL) return false ;//base condition HIT 
    else if(root->data==x) return true ;//similar to the binary search 
    else if(root->data>=x) return bstsearch(root->left,x);
    else return bstsearch(root->right,x);
}
int main()
{
     bstnode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = insert(root,10);	
	root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	root = insert(root,12);
	root = insert(root,15);	
	// Ask user to enter a number.  
    cout<<"YES"<<endl;
	int number;
	cin>>number;
	//If number is found, print "FOUND"
	if(bstsearch(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
    
}