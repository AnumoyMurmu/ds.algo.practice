#include<iostream>
using namespace std;


void reverseArray( int i, int arr[],int n)
{

    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1, arr, n);
};

int main()
{
   int n,i;
   cin>>n;
   int arr[n];

   cout<<"Enter elements: ";
   for(i=0; i<n; i++) cin>>arr[i];
    
   reverseArray(0, arr, n);

   cout<<"Elements are: ";

   for(i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}