#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int value)
    {
      data=value;
      next=NULL;
    }
};
node*head=NULL;
void rev()
{
    node *cur=head;
    node *prev=NULL;
    node*next=NULL;
    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        
    }
    head=prev;
    
    
}
void insert_begin(int value)
{
    node*newItem=new node(value);
    newItem->next=head;
    head=newItem;

}
void printlist()
{
    if(head==NULL)
    {
        return ;
    }
    node *cur=head;
    while(cur!=NULL)
    {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}
int main()
{
    insert_begin(40);
     insert_begin(30);
      insert_begin(20);
       insert_begin(10);
       rev();
       printlist();
       
      
}
