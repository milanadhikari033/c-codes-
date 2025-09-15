#include<iostream>
using namespace std;
class Complex
{
	private:
	int real, imag;
	public:
		Complex()
		{
		}
	Complex(int r , int i)
	{
		real=r;
		imag=i;
	}
	Complex(Complex &x)
	{
		real=x.real;
		imag=x.imag;
	}
	void display()
	{
		cout<<real<<"+"<<imag<<"i"<<endl;
	}
};
int main()
{
	Complex c1 (2 ,4);
	Complex c2(c1);
	Complex c3;
	c3=c1;
	cout<<"Complex number is "<<endl;
	c1.display();
	cout<<"Copying complex number is"<<endl;
	c2.display();
	cout<<"Details of the complex c3:"<<endl;
	c3.display();
	return 0;
}
