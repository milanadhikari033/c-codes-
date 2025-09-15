#include<iostream>
using namespace std;
class A
{
	protected:
	int a;
	int b;
	public:
	int c;
	 A()
	{
		
	}
	void display()
	{
		cout<<"The value of a="<<a<<endl;
		cout<<"The value of b="<<b<<endl;
		cout<<"The value of c="<<c<<endl;
	}
};
class B:public A
{
	private:
	int sum;
	public:
	void addition()
	{
		sum=a+b+c;
		cout<<"The sum of the three number is "<<sum<<endl;
		
	}
};
int main()
{
B b( 3,4,5);
b.getabc();
b.display();
b.addition();
return 0;
}
