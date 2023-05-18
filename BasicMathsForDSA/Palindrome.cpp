#include<iostream>
using namespace std;


int main()
{
    int n, last_digit, rev_num, w;
    rev_num = 0;

    cout<<"enter the number"<<endl;
    cin>>n;
    w = n;


    while(n>0)
    {
        last_digit = n%10;

        rev_num = (rev_num * 10) + last_digit;
        

        n = n/10;
        
    }
    cout<<"rev: "<<rev_num<<endl;

     if(rev_num==w)
        {
            cout<<"its a palindrome";

        }
        else{
            cout<<"it is not a palindrome";
        }


    
}