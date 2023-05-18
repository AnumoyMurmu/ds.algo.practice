#include<iostream>
#include<cmath>
using namespace std;

int main()
    {
   int n, last_digit, sum, w, x;
    sum = 0;

    cout<<"enter the number"<<endl;
    cin>>n;
    x = n;

    while(n>0)
    {
        last_digit = n%10;
        w = pow(last_digit,3);
        

        sum = sum + w;
        

        n = n/10;
        
    }

    if(sum==x)
    {
        cout<<"armstrong";
    }
    else{
        cout<<"not";
    }
    

    }

