#include<iostream>
using namespace std ;
bool search_sorted2dMatrix(int**arr,int n,int m,int target)
{
  //  int key=arr[0][m-1];
    int rst=0 ;
    int rowend=n-1 ;
    int colst=0 ;
    int colend=m-1 ;
   int key=arr[rst][colend];
     bool found ;

    while(rst<=rowend&&colst<=colend)
    {
        key=arr[rst][colend];
        if(key==target)
        {
             found=true ;
             break;
        }
        else if(key>target)
        {
            colend-- ;
        }
        else if(key<target)
        {
            rst++ ;
        }
    }
    return found ; 

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
    int ele ;
    cin>>ele ;
    bool ans=search_sorted2dMatrix(Arr,n,m,ele);
    cout<<ans<<endl ;
 return 0 ; 
}