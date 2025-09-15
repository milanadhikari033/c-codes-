#include<iostream>
using namespace std;
class A
{
	protected:
	int x,y;
	public:
	void get_xy()
	{
		cout<<"Enter the value of x and y"<<endl;
		cin>>x>>y;
	}
	void show_xy()
	{
		cout<<"The value of x="<<x<<endl;
		cout<<"The value of y="<<y<<endl;
	}
};
class B: public A
{
	private :
	int sum;
	public:
	void getaddition()
	{
	sum=x+y;	
	}
	void display()
	{
	 cout<<"the sum of two x and y is " <<sum<<endl;
	}
};
int main()
{
 B b1;
 b1.get_xy();
 b1.show_xy();	
 b1.getaddition();
 b1.display();
 return 0;
}
