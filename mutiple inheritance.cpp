/* multiple inheritance*/
#include<iostream>
using namespace std;
class M
{
	protected:
	int m;
	public:
	void get_m()
	{
		cout<<"Enter the value of m"<<endl;
		cin>>m;
	}	
};
class N 
{
	protected:
	int n;
	public:
	void get_n()
	{
		cout<<"Enter the value of n"<<endl;
		cin>>n;
	
	 } 
};
class P : public M , public N
{
	 private:
	 int product;
	 public:
	 void calculate()
	 {
	  product = m*n;
	 }
	 void display()
	 {
	 	cout<<"The product of two number is " << product<<endl;
	 }
};
	 int main()
	 {
	 	P p1;
	 	p1.get_n();
	 	p1.get_m();
	 	p1.calculate();
	 	p1.display();
	 	return 0;
	 }
	 
		 	

