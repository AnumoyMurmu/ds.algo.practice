//Backtracking
#include<iostream>
using namespace std;

long long sum(int N)
{

    if(N<1) return 1;
    return (N*N*N + sum(N-1));
     
}

int main()
{
    int N;
    cin>>N;
    sum(N);

    return 0;
}