#include<iostream>
using namespace std;


void printNos(int N) {
        // code here
        
        if(N==0) return;
        
        cout<<N<<" ";
        printNos(N-1);
    }

int main()
{
    int N;
    cin>>N;
    printNos(N);
    return 0;
}