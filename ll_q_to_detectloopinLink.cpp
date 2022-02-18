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

bool findloop(Node*head)
{
    Node*slow=head ;
    Node*fast=head ;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next ;
        fast=fast->next->next ;

        if(slow==fast)
        {
            return true ;
        }
        return false;
    }
}
int main(){

    Node*head=makelinklist();
     bool ans=findloop(head);

 return 0 ; 
}


////in this i have not feded the information in loop order butb the function is correct 