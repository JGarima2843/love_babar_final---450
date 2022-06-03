#include<iostream>
using namespace std ;

  int median(int**matrix, int r, int c){
        
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
        int median ;
        sort(arr,arr+size);
        if(size%2!=0)
        {
           median=arr[(size-1)/2] ;
        }
        else
        {
            median=(arr[(size-1)/2]+arr[(size+1)/2])/2 ;
        }
        return median ;
        // code here          
    }

int main(){
    int n ;
    int m ;
    cin>>n>>m ;
    int**Arr=new int *[n];
    for(int i=0;i<n;i++){
        Arr[i]=new int[m];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>Arr[i][j];
        }
    }
    int median=median(Arr,n,m);
    cout<<median<<endl ;

 return 0 ; 
}