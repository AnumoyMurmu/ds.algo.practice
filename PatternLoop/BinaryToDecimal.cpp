#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    int sum, i;
    sum = 0;
    i = 0;
    
    while (n!=0)
    {
        int digit = n%10;
        
        sum = (digit * pow(2, i)) + sum;
        
        n = n/10;
        i++;
        
    }
    
    cout<<sum;
    return 0;
}