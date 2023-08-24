#include<bits/stdc++.h>
using namespace std;


void selection_sort(int arr[], int n)
{

    for(int i=0; i<=n-2; i++)   //this loop gives swapping element from every element, goes till n-2 (before last element)
    {
        int  minimum=i;    //considering i of outer loop as minimum

        for(int j=i; j<=n-1; j++)   //this loop is to find the smallest element in the array which goes till n-1 (end)
        {
            if(arr[j]<arr[minimum]) minimum=j;  //after comparing, j has the smallest value which is now stored in minimum variable
        }

        int temp = arr[minimum];  //now that minimum variable has smallest value (next line)
        arr[minimum] = arr[i];    //it is going to be swapped with arr[i] --> where i of outer loop was considered smallest element before
        arr[i] = temp;
       
    }
}

int main()
{
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    selection_sort(arr, n);
    cout<<"The sorted array is:";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}