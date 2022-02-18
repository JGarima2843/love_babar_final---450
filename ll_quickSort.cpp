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

Node*merge2linkLst(Node*&head1,Node*&head2)
{
   Node*temp1=head1 ;
   Node*temp2=head2 ;

   Node*newhead=NULL ;
   Node*newtail=NULL ;

   while(temp1&&temp2)
   {
       if(temp1->data<temp2->data)
       {
           int ch=temp1->data ;
           Node*newnode=new Node(ch);

           if(newhead==NULL)
           {
               newhead=newnode ;
               newtail=newnode ;
           }
           else{
               newtail->next=newnode ;
               newtail=newnode ;
           }
           temp1=temp1->next ;
       }
       else{
           int ch=temp2->data ;
           Node*newnode=new Node(ch);

           if(newhead==NULL)
           {
               newhead=newnode ;
               newtail=newnode ;
           }
           else{
               newtail->next=newnode ;
               newtail=newnode ;
           }
           temp2=temp2->next ;
       }
   }
   return newhead ;
}

void mergeSort(Node*&head)
{
    if(head==NULL||head->next==NULL)
    {
        return ;
    }
    Node*first=head ;
    Node*slow=head ;
    Node*fast=head->next  ;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next ;
        fast=fast->next->next ;
    }

    Node*temp=slow->next ;

    slow->next=NULL ;
    mergeSort(first);
    mergeSort(temp);
    head=merge2linkLst(first,temp);
    
}


int main(){

    Node*head=makelinklist();
    print(head);
    mergeSort(head);
    print(head);

 return 0 ; 
}


/// isko mujhe krna h abhi ....