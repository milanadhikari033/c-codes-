#include<iostream>
using namespace std;
class complex
{
	private:
	int real,imag;
	public:
	void getcomplex()
	{
		cout<<"Enter the real part"<<endl;
		cin>>real;
		cout<<"Enter the imaginary part"<<endl;
		cin>>imag;
	}
	complex calculate(complex c1,complex c2)
	{
		complex temp;
		temp.real=c1.real+c2.real;
		temp.imag=c1.imag+c2.imag;
		return temp;
	}
	void display()
	{
		cout<<real<<"+"<<imag<<"i";
	}
	
};
int main()
{
	complex c1,c2,c3;
	cout<<"Enter the first complex number"<<endl;
	c1.getcomplex();
	cout<<"Enter the second complex number"<<endl;;
	
	c2.getcomplex();
	 complex calculate(complex c1, complex c2);
	cout<<"the sum of two complex number is ";
	c3.display();
	return 0;
	
	}
