#include<iostream>
using namespace std ;


int rowWithMax1s(int **arr, int n, int m) {
    int count=0 ;
    int max1=INT_MIN ;
    int idx ;
    for(int i=0;i<n;i++)
    {
        count=0 ;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                count++ ;
            }
        }
        if(max1<count)
        {
            idx=i ;
            max1=count ;
        }
    }
    // code here
    if(max1==0)
    {
        return -1 ;
    }
    else{
    return idx ;
    }
	}
int main(){
       int n ,m ;
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
    int row=rowWithMax1s(Arr,n,m);
    cout<<row<<endl ;

 return 0 ; 
}