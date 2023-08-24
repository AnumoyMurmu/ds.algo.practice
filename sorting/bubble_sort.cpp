#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n)
{

    for(int i=n-1; i>=1; i--)    //n-1 is entire array till i does not become less than 1
    {
        for(int j=0; j<=i-1; j++)   //j<=i-1 --> n-1-1 = n-2 before the last index
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the value for n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) cin>>arr[i];
    bubble_sort(arr, n);
    cout<<"The sorted array is:";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}