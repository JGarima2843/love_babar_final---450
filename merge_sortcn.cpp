#include<iostream>
 using namespace std ;

void arrange(int arr[], int s, int m, int e)
{
    int st=s ;
    int x=m+1;
  int temp[e-s+1];
    int k=0;
    while(s<=m && x<=e)
    {
        if(arr[s]<=arr[x]){
            temp[k]=arr[s];
            k++ ;
            s++;
        }
        else{
            temp[k]=arr[x];
            k++ ;
            x++ ;
        }
    }
    while(s<=m)
    {
        temp[k]=arr[s];
        k++ ;
        s++ ;
    }
    while(x<=e)
    {
        temp[k]=arr[x];
        k++ ;
        x++ ;
    }
    
    for(int i=0;i<k;i++)
    {
        arr[i+st]=temp[i];
    
    }
}
void sort(int inp[], int s, int e)
{
    if(s>=e)
        return;

    int mid=(s+e)/2;
    
    sort(inp, s, mid);
    sort(inp, mid+1, e);
    arrange(inp, s, mid, e);
}
void mergeSort(int input[], int size){
    int start=0;
    int end=size-1;
    sort(input, start, end);
}
int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
