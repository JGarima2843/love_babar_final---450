#include<bits/stdc++.h>
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

Node*find_intersection(Node*head1 ,Node*head2)
{
    unordered_map<int ,bool>hash ;

    Node*newhead=NULL ;
    Node*newtail=NULL ;

    Node*temp1=head1 ;
    Node*temp2=head2 ;

    while(temp1!=NULL)
    {
        int ch=temp1->data ;
        hash[ch]=true ;
        temp1=temp1->next ; 
    }

    while(temp2!=NULL)
    {
        int ch=temp2->data ;

        if(hash[ch]==true)
        {
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

            hash[ch]=false ;
        }
        temp2=temp2->next ;
    }

    return newhead ;



}
int main(){

    Node*head1=makelinklist();
    Node*head2=makelinklist();

    Node*newhead=find_intersection(head1,head2);

    print(newhead);

 return 0 ; 
}