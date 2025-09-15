#include<iostream>
using namespace std;
class complex
{
	private:
	int real,imag;
	public:
	complex()
	{
		real=4;
		imag=4;
	}
	
	complex(int r , int i)
	{
		real=r;
		imag=i;
	}
	void addcomplex(complex c1,complex c2)
	{
		real=c1.real+c2.real;
		imag=c1.imag+c2.imag;
	}
	void display()
	{
	 	cout<<real<<"+"<<imag<<"i"<<endl;
	}
};
int main()
{
	complex c1;
	complex c3;
	complex c2(10,20);
	cout<<"For the first complex number"<<endl;
	c1.display();
	cout<<"For the second complex number"<<endl;
	c2.display();
	c3.addcomplex(c1,c2);
	cout<<"The resultant complex number="<<endl;
	c3.display();
	return 0;
	
}
