#include<iostream>
using namespace std;
class complex2;
class complex1
{
	private:
	int i1,r1;
	public:
	void getdata()
	{
		cout<<"Enter the real and imaginary number"<<endl;
		cin>>i1>>r1;
	}
	friend class complex2;
};
void sum(complex1 ,c1)
{
	r2=r2+c1.r1;
	i2=i2+c1.i1;
	cout<<"sum="<<r2<<"+"<<i1<<"i"<<endl;
}
int main()
{
	complex c2;
	c2.getdata();
	c2.sum();
	return 0;
}
