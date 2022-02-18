#include<bits/stdc++.h>
using namespace std ;

void permute(vector<int>v1,int n)
{
    next_permutation(v1.begin(),v1.end());
    for(int i=0;i<n;i++)
    {
        cout<<v1[i]<<" ";
    }
}
int main(){

   int n ;
   cin>>n ;
    vector<int>v1 ;
    for(int i=0;i<n;i++)
    {
        int num ;
        cin>>num ;
        v1.push_back(num);
    }
    permute(v1,n);

    

 return 0 ; 
}