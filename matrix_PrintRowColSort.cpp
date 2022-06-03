#include<bits/stdc++.h>
using namespace std ;

int ** sortedMatrix(int N,int** Mat) {
        // code here
        int size=N*N ;
        int arr[size];
        int k=0 ;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                arr[k]=Mat[i][j];
                k++ ;
            }
        }
        k=0 ;
        sort(arr,arr+size);
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                Mat[i][j]=arr[k];
                k++ ;
                
            }
        }
        return Mat ;
        
    }
int main(){

   int n ;
    cin>>n ;
    int**Arr=new int *[n];
    for(int i=0;i<n;i++){
        Arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>Arr[i][j];
        }
    }
    Arr=sortedMatrix(n,Arr);
    
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl ;
    }


 return 0 ; 
}