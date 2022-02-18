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

Node*movelatelement_tofirst(Node*head)
{
    Node*prev=NULL;
    Node*temp=head ;
    while(temp->next!=NULL)
    {
        prev=temp ;
        temp=temp->next ;
    }

    
    temp->next=head ;
    prev->next=NULL;
    head=temp  ;
    return head ;

}
int main(){

    Node*head=makelinklist();
    print(head);
    head=movelatelement_tofirst(head);
    print(head);

 return 0 ; 
}