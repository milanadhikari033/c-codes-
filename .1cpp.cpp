#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter the first number"<<endl;
	cin>>num1;
	cout<<"Enter the second number"<<endl;
	cin>>num2;
	cout<<"Values before swaping"<<endl;
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
	swap(num1,num2);
	cout<<"Values after swaping"<<endl;
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
	return 0;
}
