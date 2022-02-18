#include<iostream>
using namespace std ;

int kadane(int *arr,int n)
{
    int sum=INT_MIN ;
    int curr_sum=0 ;
    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];

        if(curr_sum>sum)
        {
            sum=curr_sum ;
        }
        if(curr_sum<0)
        {
           curr_sum=0 ;
        }

    } 
    return sum ;
}
int main(){

    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=kadane(arr,n);
    cout<<sum<<endl; 

 return 0 ; 
}