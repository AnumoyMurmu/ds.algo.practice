#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // recomputation
    // int hash[13]={0};
    // for(int i=0; i<n; i++)
    // {
    //     hash[arr[i]] += 1;
    // }

    unordered_map<int, int>mpp;
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]] += 1;
    }

    // fetch
    int q;
    q=n;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<mpp[number]<<" ";
    }
}