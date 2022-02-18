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

Node* remove_duplicates(Node*head){
    if(head==NULL)
    return head ;

    if(head->data==head->next->data)
    {
        Node*temp2=head->next;
        Node*temp
        head->next =temp2 ;
    }
    head->next=remove_duplicates(head->next);
    return head ;
}
int main(){

    Node*head=makelinklist();
    print(head);

    head=remove_duplicates(head);
    print(head);

 return 0 ; 
}

 struct Node*temp1=head ;
   struct Node*temp2=head->next ;
   
   while(temp2!=NULL)
   {
       if(temp1->data==temp2->data)
       {
           struct Node* temp3=temp2->next ;
           temp1->next = temp3 ;
           temp2=temp3 ;
       }
       else{
       temp1=temp1->next ;
       temp2=temp2->next ;
       