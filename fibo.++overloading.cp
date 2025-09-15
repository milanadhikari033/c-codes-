#include<iostream>
using namespace  std;
class fibo
{
	private:
	int a, b,c;
	public:
	fibo(int x)
	{
		a=-x;
		b=x;
		c=a+b;
	}
	void display()
	{
		cout<<c<<",";
	}
	void operator++()
	{
		a=b;
		b=c;
		c=a+b;
	}
};
int main()
{
	fibo f=1;
	int i;
	for(i=0;i<10;i++)
	{
		
		f.display();
		++f;
	}
	return 0;
}
