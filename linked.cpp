#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next= NULL;
    }

};
node*head=NULL;
void insert_begin(int value)
{
    node* newItem=new node(value);
    newItem->next=head;
    head=newItem;
}
void printlist(){
    if(head==NULL)
    {
        return;
    }
    node *cur=head;
    while(cur!=NULL)
    {
       cout<<cur->data<<endl;
       cur=cur->next;
    }
}
void insert_tail(int value){

    node*newItem=new node(value);
    if(head==NULL){
        head=newItem;
        return;
    }
    node*last=head;
    while(last->next!=NULL)
    {
      last=  last->next;
    }
    last->next=newItem;
}
void insert_middle(int target,int value)
{
    node * newItem=new node(value);
    node*prev=head;
    while(prev->data  != target)
    {
        prev=prev->next;
    }
    newItem->next=prev->next;
    prev->next=newItem;
}





void delete_first()
{
    node *cur=head;
    head=head->next;
    delete cur;
}
void delete_tail()
{
    if(head== NULL)
    {
        return;
    }
    node *cur=head;
    node *prev=NULL;
    while(cur->next!=NULL)
    {
      prev=cur;
      cur=cur->next;
    }
    if(prev==NULL)
    {
        head=NULL;
    }
    else{
        prev->next=NULL;
       
    }
     delete cur;
    
}
void delete_mid(int target)
{
    node *cur=head;
    node*prev=NULL;
    if(head==NULL){
return;
    }
    while(cur->data!=target)
    {
        prev=cur;
          cur=cur->next;
          
    }
    if(prev==NULL)
    {
        head==NULL;
    }
    else{
        prev->next=cur->next;

    }
    delete cur;
}
void menu(){
    while(true){
    int choice,value;
    cout<<"press:";
    cin>>choice;
    if(choice==1)
    {
        cout<<"insert value";
        cin>>value;
        insert_begin(value);
    }
     else if(choice==2)
    {
        cout<<"insert value";
        cin>>value;
        insert_tail(value);
    }
    
     else if(choice==4)
    {
       printlist() ;
    }
    else if(choice==0)
    {
        break;
    }
}
}
int main()
{
   menu();
}
