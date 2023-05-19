#include<iostream>
using namespace std;


void fun(int cut)
{
    if(cut==4)
    {
        return;
    }

    cout<<cut<<endl;
    cut++;
    
    fun(cut);

}
int main()
{
    int cut=0;
    fun(cut);

    return 0;
}