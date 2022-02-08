#include<iostream>
using namespace std ;


void reverse_array(int *arr,int st,int end)
{
    if(st==end||st>end)
    {
        return ;
    }
    int temp ;
    temp=arr[st];
    arr[st]=arr[end-1];
    arr[end-1]=temp ; 

    reverse_array(arr,st+1,end-1);
}
int main(){

    int n ;//size of the array 
    cin>>n ;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    reverse_array(arr,0,n);
    cout<<"reversed array :"<<endl ;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

 return 0 ; 
}