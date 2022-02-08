#include<bits/stdc++.h>
using namespace std ;
int main(){

    priority_queue<int> pq1 ;//for max element 
    priority_queue<int,vector<int>,greater<int>> pq2 ;//min element

    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pq1.push(arr[i]);
        pq2.push(arr[i]);
    } 

    int max_ele=pq1.top();
    int min_ele=pq2.top();

    cout<<max_ele<<endl ;
    cout<<min_ele<<endl ;
    






 return 0 ; 
}