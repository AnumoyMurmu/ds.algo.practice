#include<iostream>
using namespace std;


int main()
{
    int n, last_digit, rev_num, w;
    rev_num = 0;

    cout<<"enter the number"<<endl;
    cin>>n;


    while(n>0)
    {
        last_digit = n%10;

        rev_num = (rev_num * 10) + last_digit;
        

        w = n/10;

        n = w;

        
    }

    cout<<"The reverse of "<< n <<" is "<<rev_num;
}