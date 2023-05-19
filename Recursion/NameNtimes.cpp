#include<iostream>
using namespace std;

void print(int N)
{
    if(N==0) return;
    
    cout<<"Anumoy"<<" ";
    print(N-1);

}
int main()
{

    int N;
    cin>>N;
    print(N);

    return 0;
}