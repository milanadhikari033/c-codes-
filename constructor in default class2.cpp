#include<iostream>
using namespace std;
class alpha
{
	private:
		int a;
		public:
		alpha (int x)
		{
			a=x;
		}
	 void showa()
	 {
	 	cout<<"The value of the a is "<<a<<endl;
	 }

};
class beta : public alpha 
{
	private:
	int b;
	public:
	beta(int x , int y): alpha(x)
	{
		b=y;
	}
	void showb()
	{
		cout<<"The value of the b is "<<b<<endl;
	}
};
class gamma:public beta
{
	private:
	int c;
	public:
	gamma (int x, int y, int z): beta(x ,y)
	{
		c=z;
	}
	void showg()
	{
		cout<<"the value of the c is "<<c<<endl;
	}
};
int main()
{
	gamma g1( 4, 8, 12);
	g1.showa();
	g1.showb();
	g1.showg();
	return 0;
}
