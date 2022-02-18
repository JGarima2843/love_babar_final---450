#include<bits/stdc++.h>
using namespace std ;
int main(){


        int N ;cin>>N;
        int Mat[N][N];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>Mat[i][j];
            }
        }
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
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout<<Mat[i][j]<<" ";
            }
            cout<<endl ;
        }

 return 0 ; 
}