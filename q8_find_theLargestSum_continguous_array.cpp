#include<iostream>
using namespace std ;
int main(){

    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int currsum=0 ;
    int sum=INT_MIN ;
    for(int i=0;i<n;i++)
    {
        currsum=currsum+arr[i];
        if(currsum>sum)
        {
            sum=currsum ;
        }
        if(currsum<0)
        {
            currsum=0 ;
        }
    }

    cout<<sum ;

 return 0 ; 
}