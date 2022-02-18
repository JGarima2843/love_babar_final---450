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
int generate_carry(Node*head)
{
    if(head==NULL)
    {
        return 1 ;
    }
    int res=head->data+generate_carry(head->next);

    head->data=res%10 ;
    return res/10 ;
}
Node*add1linkedLst(Node*head)
{
    int carry=generate_carry(head);

    if(carry>0)
    {
        Node*newnode=new Node(carry);
        newnode->next=head ;
        head=newnode ;

    }
    return head ;

}
int main(){

    Node*head=makelinklist();
    print(head);
    head=add1linkedLst(head);
    print(head);

 return 0 ; 
}