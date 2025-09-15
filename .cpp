/*
#include<iostream>
using namespace std;
class complex
{
	private:
	int real, imag;
	public:
	complex ()
	{
	}
	complex ( int r ,int i)
	{
		real=r;
		imag=i;
	}
	void  additioncomplex( complex c1, complex c2)
	{
		real =c1.real+c2.real;
		imag=c1.imag+c2.imag;
		}
		void display()
		{
		  cout<<real<<"+"<<imag<<"i"<<endl;	
		}
};
int main()
{
complex c3;
int  real ,imag,r1 , i1;
cout<<"Enter the real and imaginary part for first complex number"<<endl;
cin>>r1>>i1;
cout<<"Enter the real and imaginary part for second complex number"<<endl;
cin>>real>>imag;
complex c1( r1 , i1);
complex c2(real , imag);
cout<<"For the first complex number "<<endl;
c1.display();
cout<<"For the second complex number"<<endl;
c2.display();
c3.additioncomplex(c1,c2);
cout<<"The resultant complex number="<<endl;
c3.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
	complex()
	{
	real=2;
	imag=23;	
	}
	complex(int r, int i)
	{
		real=r;
		imag=i;
	}
	void addition(complex c1 , complex c2)
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
	 
 complex c2(2 ,25);
 complex c1,c3;
 c3.addition(c1,c2);
 cout<<"The resultant complex number is "<<endl;
 c3.display();
 return 0;
}
