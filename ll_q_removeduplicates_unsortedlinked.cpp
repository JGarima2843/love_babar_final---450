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

Node*removedup_unsorted(Node*head)
{
    unordered_map<int,bool>hash ;
    Node*temp1=head ;
    Node*temp2=head->next ;

    hash[head->data]=true ;

    while(temp2!=NULL&&temp1!=NULL)
    {
        int ch=temp2->data ;

        if(hash[ch]==false)
        {
            hash[ch]=true ;
            temp1=temp1->next ;
            temp2=temp2->next ;
        }
        else{
            Node*temp3=temp2->next ;
            temp1->next=temp3 ;
            temp2=temp3 ;
        }
    }
    return head ;
}
int main(){

    Node*head=makelinklist();
    print(head);
    head=removedup_unsorted(head);
    print(head);



 return 0 ; 
}