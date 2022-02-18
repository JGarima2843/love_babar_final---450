#include<iostream>
using namespace std ;

void merge(int *arr1,int *arr2,int n,int m){

    int*dp=new int[n+m];
    int i=0;
    int j=0;
    int k=0 ;
    while(i<n&&j<m)
    {
        if(arr1[i]>arr2[j])
        {
            dp[k]=arr2[j];
            k++ ;
            j++ ;
        }
        else
        {
            dp[k]=arr1[i];
            k++ ;
            i++ ;
        }
    }
    if(i<n)
    {
        while (i<n)
        {
            /* code */
            dp[k]=arr1[i];
            k++;
            i++ ;
        }
        
    }
    if(j<m)
    {
        while(j<m)
        {
            dp[k]=arr2[j];
            k++ ;
            j++ ;
        }
    }
     k=0 ;
    for(int i=0;i<n;i++)
    {
        arr1[i]=dp[k];
        k++ ;
    }
    for(int j=0;j<m;j++)
    {
        arr2[j]=dp[k];
        k++ ;
    }

    delete []dp;
}
int main(){

    int n;
    cin>>n ;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int m ;
    cin>>m ;
    int arr2[m];
    for(int j=0;j<m;j++)
    {
        cin>>arr2[j];
    }

    merge(arr1,arr2,n,m);
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    for(int j=0;j<m;j++)
    {
        cout<<arr2[j]<<" ";
    }

 return 0 ; 
}