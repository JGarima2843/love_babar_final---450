#include<iostream>
using namespace std ;
int main(){

    int n ;
    cin>> n ;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int k ;
     cin>>k ;

    int ans=arr[n-1]-arr[0];
    int small=arr[0]+k;
    int large=arr[n-1]-k ;
    for(int i=0;i<n;i++)
    {
        int mi=min(arr[i+1]-k,small);
        int ma=max(arr[i]+k,large);

        int temp=ma-mi ;
        if(mi<0)
        continue ;
        if(ans>temp)
        {
            ans=temp ;
        }
    }
    cout<<ans<<endl ;


 return 0 ; 
}