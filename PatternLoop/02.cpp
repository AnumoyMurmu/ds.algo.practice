#include<iostream>
using namespace std;


void pattern(int n)
{
	
	for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i;j++)
        {

            cout<<"  *  ";
        }
        
        cout<<endl;
    }
	
}


int main()
{
	
	
	int t,n;
	cin>>t;
	for(int i=0; i<t;i++)
	{
		cin>>n;
		pattern(n);
		
	}
	
	
	return 0;
}
