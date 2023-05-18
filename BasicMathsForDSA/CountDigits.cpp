#include<iostream>
using namespace std;


int main()
{
    int n, last_digit, sum, w;
    sum = 0;

    cout<<"enter the number"<<endl;
    cin>>n;


    while(n>0)
    {
        last_digit = n%10;
        sum = sum + last_digit;

        w = n/10;

        n = w;

        cout<<"the digits are: "<<last_digit<<endl;
    }

    cout<<"The sum is "<<sum;
}