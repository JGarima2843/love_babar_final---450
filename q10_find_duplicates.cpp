#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int arr[n];

    unordered_map<int,int>hash ;
    int key ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(hash.count(arr[i])>0)
        {
          key=arr[i];
          break ;
        }
        hash[arr[i]]++ ;
        
    }
      
      cout<<key<<endl ;
 return 0 ; 
}