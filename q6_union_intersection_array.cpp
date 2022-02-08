#include<bits/stdc++.h>
using namespace std ;
int main(){


   int n ;
   int p ;
   cin>>n ;
   int arr1[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr1[i];

   }
   cout<<endl ;
   cin>>p ;
   int arr2[p];  
   for(int i=0;i<p;i++)
   {
       cin>>arr2[i];
   }

   int intersection ;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<p;j++)
       {
           if(arr1[i]==arr2[j])
           {
                   intersection=arr1[i];
                   break ;
           }
           else{
               continue ;
           }
       }
   }

   cout<<intersection<<endl ;
   int c=n+p ;
   int union1[c];
   int j =0 ;
   for(int i=0;i<n;i++)
   {
        union1[j]=arr1[i];
        j++ ;
   }
   for(int i=0;i<p;i++)
   {
       union1[j]=arr2[i];
       j++ ;
   }
//int c=n+p
   for(int i=0;i<c;i++)
   {
       for(int j=0;j<c;j++)
       {
           if(i!=j && union1[i]==union1[j])
           {
                for(int k=j+1;k<c;k++)
                {
                    union1[k-1]=union1[k];
                }
                c-- ;
            
           }
            
       }
   }
   for(int i=0;i<c;i++)
   {
       cout<<union1[i]<<" ";
   }





 return 0 ; 
}