#include<iostream>
using namespace std ;
 
void print_spiral(int r,int c,int **input)
{
    int row_st=0 ;
    int row_end=r-1 ;
    int col_st=0 ;
    int col_end=c-1 ;

    int dir =0 ;///beacuse me nhi chahti ki sb loops ek sath execute ho ;

    while(row_st<=row_end&&col_st<=col_end)
    {
        if(dir==0){
        for(int i=col_st;i<=col_end;i++)
        {
            cout<<input[row_st][i]<<"  ";
        }
        row_st++ ;
        }
        if(dir==1){
            for(int i=row_st;i<=row_end;i++)
            {
                cout<<input[i][col_end]<<"  ";
            }
            col_end-- ;
        }
         if(dir==2){
            for(int i=col_end;i>=col_st;i--)
            {
                cout<<input[row_end][i]<<"  ";
            }
            row_end--;
        }
         if(dir==3){
            for(int i=row_end;i>=row_st;i--)
            {
                cout<<input[i][col_st]<<"  ";
            }
            col_st++ ;
        }

        dir=(dir+1)%4 ;
    }

}
int main(){
    int n ;
    int m ; 
    cin>>n>>m ;
    int **arr=new int*[n];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl<<endl ;

    print_spiral(n,m,arr);

 return 0 ; 
}