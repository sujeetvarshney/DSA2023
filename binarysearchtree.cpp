#include<bits/stdc++.h>
using namespace std;

class node
{
   public:

   int data;
   node *left;
   node *right;

   node(int d)
   {
      data=d;
      left = NULL ; right  =NULL;
   }


};

bool searchbst(node *root, int key)
{
   if(root==NULL)
   {
      return false;
   }
   if(root->data==key)
   {
      return true;
   }

   else if(root->data<key)
   {
      return searchbst(root->right,key);
   }

   else
   {
      return searchbst(root->left,key);
   }
}

node *insertbst(node *root,int data)
{
   if(root==NULL)
   {
      root=new node(data);
      return root;
   }

   else if(data<=root->data)
   {
      root->left=insertbst(root->left,data);
      return root;
   }
   else
   {
      root->right=insertbst(root->right,data);
      return root;
      
   }

}

void preorder(node *root)
{
   if(root!=NULL)
   {
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);

   }
}

void inorder(node *root)
{
   if(root!=NULL)
   {
      inorder(root->left);
      cout<<root->data<<" ";
      
      inorder(root->right);

   }
}


void postorder(node *root)
{

   if(root!=NULL)
   {
      
      
      postorder(root->left);
      postorder(root->right);
      cout<<root->data<<" ";
   }

}

int main()
{


node *root=NULL; //let tree empty

int data;

cout<<"\nEnter data for node ";
cin>>data;

while(data!=-1)
{
root=insertbst(root,data);   
cout<<"\nEnter data ";
cin>>data;
}

preorder(root);

int key;
cout<<"\nEnter key you want to search";
cin>>key;

if(searchbst(root,key)==true)
{
   cout<<"Element is found ";
}
else
{
   cout<<"Element is not found";
}
return 0;
}
