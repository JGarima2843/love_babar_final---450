#include<bits/stdc++.h>
using namespace std ;
int main(){

    priority_queue<int>pq1 ;
    priority_queue<int,vector<int>,greater<int>> pq2;
      
      int n ;
      cin>>n ;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          pq1.push(arr[i]);
          pq2.push(arr[i]);

      }


      int k ;
      cin>>k ;
      int count=1 ;
      int kth_max ;
      int kth_min ;
      while(count!=k)
      {
          pq1.pop();
          pq2.pop();
          count++ ;
      }

      kth_max=pq1.top();
      kth_min=pq2.top();
      cout<<kth_max<<endl ;
      cout<<kth_min<<endl ;


 return 0 ; 
}