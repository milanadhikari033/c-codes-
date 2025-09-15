#include<iostream>
using namespace std;
template<class T>
class sample
{
    private:
    T a ,b,s,p;
    public:
    	sample(T x , T y)
    	{
    		a=x;
    		b=y;
		}
    void addition()
    {
        s= a+b;
        cout<<"The sum of  two numbers is "<<s<<endl;
    }
    void multiplication()
    {
        p=a*b;
        cout<<"The multiplication two numbers is "<<p<<endl;
  
    }
};
int main()
{
 sample<int>s1(3,4);
 sample <float>s2(3.9,8.1);
 s1.addition();
 s1.multiplication();
 s2.addition();
 s2.multiplication();
 return 0;
}
