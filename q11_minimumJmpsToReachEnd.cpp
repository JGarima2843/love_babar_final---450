#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int jump=0 ;
    int max=0;
    int i=0;
    while(max<=n)
    {
        max+=arr[i];
       // arr=&arr[i];
        i=arr[i];
        jump++ ;
    }
    // if(max>n){
    // jump++ ;


    cout<<jump<<endl ;

 return 0 ; 
}