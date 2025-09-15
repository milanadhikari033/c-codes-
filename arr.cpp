#include<iostream>
using namespace std;
class complex 
{
	int real, imag;
	public:
	void getdata()
	{
		cout<<"Enter the  real part"<<endl;
		cin>>real;
		cout<<"Enter the imaginary part"<<endl;
		cin>>imag;
	}
	void display()
	{
		cout<<real<<"+"<<imag<<"i"<<endl;
	}
	void addcomplex(complex c1, complex c2)
	{
		real=c1.real+c2.real;
		imag=c1.imag+c2.imag;
	}
};
int main()
{
	complex c1,c2,c3;
	cout<<"For the first complex number:"<<endl;
	c1.getdata();
	cout<<"For the second complex number:"<<endl;
	c2.getdata();
	cout<<"The first complex number is ";
	c1.display();
	cout<<"The second complex number is ";
	c2.display();
	c3.addcomplex(c1,c2);
	cout<<"The resultant complex number is ";
	c3.display();
	return 0;
}