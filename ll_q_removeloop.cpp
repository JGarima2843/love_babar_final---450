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

void remove(Node*,temp,Node*head)
{
    if(temp->next==head)
    {
        temp->next=NULL;

    }
    remove(temp->next,head);
}

void removeloop(Node*head)
{
    Node*slow=head;
    Node*fast=head ;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next ;
        fast=fast->next->next ;

        if(slow==fast)
        {
            if(slow==head)
            {
                remove(head,head);
            }
            else{

                slow=head ;
                while(slow->next!=fast->next)
                {
                    slow-slow->next ;
                    fast=fast->next ;

                }
                fast->next=NULL;
            }

            // iske through apn starting point of the loop ko bhi detect kr skte h  by just returning fast->data ;
        }

    }
}
int main(){

    ///i have not mae cycle function in linked list ;



 return 0 ; 
}