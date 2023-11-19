#include <iostream>
using namespace std;
class Node
{
    int data;
    Node* left;
    Node* right;
public:
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};






Node* buildtree()
{
    int n;
    cout<<"enter the data or -1 to end the tree"<<endl;
    cin>>n;
    if(n==-1)
    {
        return NULL;
    }
    Node* newnode=new Node(n);
    cout<<"enter the left child of "<<n<<endl;
    newnode->left=buildtree();
    cout<<"enter the right child of "<<n<<endl;
    newnode->right=buildtree();


    return newnode;
}




void preorder(Node* &root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}





Node* insert_at_bst(Node* &root,int key)
{
    if(root==NULL)
    {
        return new Node(key);
    }
    if(root->data>key)
    {
        root->left=insert_at_beg(root->left,key);
    }
    else if(root->data<key)
    {
        root->right=insert_at_beg(root->right,key);
    }
    return root;
}





bool search_binarysearchtree(Node* root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==key)
    {
        return true;
    }
    else if(root->data > key)
    {
        return search_binarysearchtree(root->left,key);//return keyword should be used.
    }
    else if(root->data < key)
    {
        return search_binarysearchtree(root->right,key);//return keyword should be used.
    }
}



Node* inorder_success(Node* root){
Node* curr=root;
while(curr && curr->left != NULL){
curr=curr->left;}
return curr;}



Node* to_del(Node* root,int key)
{
    if(root->data > key)
    {
        root->left=to_del(root->left,key);
    }
    else if(root->data < key)
    {
        root->right=to_del(root->right,key);
    }
    else
    {
        if(root->right==NULL)
        {
            Node* temp=root;
            free(root);
            return temp;
        }
        else if(root->left==NULL)
        {
            Node* temp=root;
            free(root);
            return temp;
        }
        Node* temp=inorder_success(root->right);
        root->data=temp->data;
        root->right=to_del(root->right,temp->dat);

    }return root;
}
int main()
{

    Node* root=buildtree();
    preorder(root);
    return 0;
}

