#include<iostream>
using namespace std;
template<class T>
class largest
{
	private:
	T x , y ,z;
	public:
	largest(T a, T b ,T c)
	{
		x=a;
		y=b;
		z=c;
	}
	void large()
	{
		if(x>y&&x>z)
		{
			cout<<x<<endl;
		}
		else if(y>x&&y>z)
		{
			cout<<y<<endl;
		}
		else
		{
			cout<<z<<endl;
		}
	}
	
};
int main()
{
	largest<int>l1(2,4,3);
	largest<float>l2(1.3,3.2,4.5);
	largest<float>l3(1,3,4.5);   // compiler automatically changes the integer data into the float type data
	cout<<"The largest number among three integer  number is ";
	l1.large();
	cout<<"The largest number among three floating nubmer is  number is ";
	l2.large();
	cout<<"the largest number among two interger and one floating nubmer is ";
	l3.large();
	return 0;
}
