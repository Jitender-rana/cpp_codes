#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insert_at_tail(Node* &head,int element)//function to insert at tail of linked list.
{
    Node* newnode=new Node(element);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }

}
void insert_at_beg(Node* &head,int element)
{
    Node* newnode= new Node(element);
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    newnode->next=head;
    head=newnode;

}
int main()
{
    Node* head=NULL;
    int n,element;
    cout<<"Enter the no of elements in linked list: "<<endl;
    cin>>n;
    cout<<"Enter the elements to be inserted in linked list."<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>element;
        insert_at_beg(head,element);
    }
    print(head);
    return 0;
}
