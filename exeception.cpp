#include<iostream>
using namespace std;
int main()
{
	int a,b,x;
	cout<<"Enter the values of x and y"<<endl;
	cin>>a>>b;
	x=a-b;
	try
	{
		if (x!=0)
		{
			cout<<"Result of (a/x)="<<a/x<<endl;
		}
		else
		{
		throw(x);	
		}
	}
	catch(int i)
	{
		cout<<"Exception caught:DIVIDE BY ZERO"<<endl;
	}
	cout<<"END"<<endl;
	return 0;
}
