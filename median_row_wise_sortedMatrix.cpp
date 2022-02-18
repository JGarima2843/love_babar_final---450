#include<bits/stdc++.h>
using namespace std ;
int main(){

        int r ;
        int c ;
        cin>>r>>c ;
        int matrix[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>matrix[i][j];
            }
        }
        int size=r*c ;
        int arr[size];
        int k=0 ;
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                arr[k]=matrix[j][i];
                k++ ;
            }
        }
        sort(arr,arr+size);
        cout<<endl ;
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl  ;
        int median ;
        if(size%2!=0)
        {
           median=arr[(size-1)/2] ;
        }
        else
        {
            median=(arr[(size-1)/2]+arr[(size+1)/2])/2 ;
        }
        

        cout<<median<<endl ;

 return 0 ; 
}