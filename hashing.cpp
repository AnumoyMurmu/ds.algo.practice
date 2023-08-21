#include<bits/stdc++.h>
#include <string>
using namespace std;


//number hashing
// int main()
// {
//   int n;
//   cout<<"Enter the size of n:";
//   cin>>n;
//   int arr[n];
//   cout<<"Enter the array elements:";

//   for(int i=0; i<n; i++)
//   {
//     cin>>arr[i];
//   } 

//   int hash[13] = {0};
//   for(int i=0; i<n; i++)
//   {
//     hash[arr[i]] += 1;
//   }

// //query
//   int q;
//   cout<<"Enter the size of q:";
//   cin>>q;
//  while(q--)
//   {

//     int number;
//     cout<<"Enter the number u want to do a query about";

//     cin>>number;

//     // fetching

//     cout<<hash[number]<<endl;
//   }

//     return 0;
// }



//character hashing involved ascii value for lower case letters
//(a-z) that is why hash[26]
// int main()
// {
//     string s;
//     cin>>s;

//     //pre-computation
//     int hash[26] = {0};
//     for(int i=0; i<s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin>>q;
//     while(q--)
//     {
//         char c;
//         cin>>c;
//         cout<<hash[c-'a'];
//     }


//     return 0;
// }


//ASCII for all 126 characters
int main()
{
    string s;
    cin>>s;

    //pre-computation
    int hash[126] = {0};
    for(int i=0; i<s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c];
    }


    return 0;
}