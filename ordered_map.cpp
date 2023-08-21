#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;
  cout<<"Enter the size of n:";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements:";

  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  } 

  //pre-computation
  map<int, int>mpp;
  for(int i=0; i<n; i++)
  {
    mpp[arr[i]]++;
  }

  for(auto i:mpp)
  {
    cout<<"MAP:"<<endl;

    cout<<i.first<<endl;
  }


//query
  int q;
  cout<<"Enter the size of q:";
  cin>>q;
 while(q--)
  {

    int number;
    cout<<"Enter the number u want to do a query about";

    cin>>number;

    // fetching

    cout<<mpp[number]<<endl;
  }

    return 0;
}