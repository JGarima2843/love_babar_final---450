#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node*next ;
    Node(int n)
    {
        data=n ;
        next=NULL ;
    }
};

Node*makelinklist()
{
    Node*head =NULL;
    Node*tail=NULL ;
    int data ;
    cout<<"enter the data :"<<endl ;
    cin>>data ;
    while(data!=-1)
    {
        Node*newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode ;
            tail=newnode ;
        }
        tail->next=newnode ;
        tail=newnode ;

        cout<<"enter the data :"<<endl ;
        cin>>data  ;

    }
   return head ;


}

void print(Node*head){
    Node*temp=head ;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next ;
    }

    cout<<endl ;

}
Node*reversell1(Node*head)
{
    if(head==NULL||head->next==NULL)
    {
        return head ;
    }

    Node*temp=reversell1(head->next);
    Node*tail=head->next ;
    tail->next=head ;
    head->next=NULL ;
    return temp ;
}

Node*reversell2(Node*head)
{
    if(head==NULL||head->next==NULL)
    {
        return head ;
    }
    Node*small=reversell2(head->next);
    Node*temp=small ;
    while(temp->next!=NULL)
    {
        temp=temp->next ;
    }
    temp->next=head ;
    head->next=NULL ;
    return small ; 
}
int main(){

    Node*head=makelinklist();
    print(head);
    head=reversell1(head);
    print(head);
    



 return 0 ; 
}