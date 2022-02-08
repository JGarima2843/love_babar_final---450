#include<iostream>
using namespace std ;
int main(){

    int n ;
    cin>>n ;
    int arr[n];

    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            count0++ ;
        }
        else if(arr[i]==1)
        {
            count1++ ;

        }
        else if(arr[i]==2)
        {
            count2++ ;
        }


    }
    
    int j=0 ;
    while(count0!=0)
    {
         arr[j]=0 ;
         j++ ;
         count0-- ;
    }
    while(count1!=0)
    {
        arr[j]=1 ;
        j++ ;
        count1-- ;
    }

    while(count2!=0)
    {
        arr[j]=2 ;
        j++ ;
        count2-- ;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

 return 0 ; 
}