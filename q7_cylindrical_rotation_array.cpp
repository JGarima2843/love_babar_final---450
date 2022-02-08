#include<bits/stdc++.h>
using namespace std ;
int main(){

    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int lst=arr[n-1];
    int temp1=arr[0];
    for(int i=1;i<n;i++)
    {
        int temp2=arr[i];
        arr[i]=temp1 ;
        temp1=temp2 ;
    }
    arr[0]=lst ;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

 return 0 ; 
}