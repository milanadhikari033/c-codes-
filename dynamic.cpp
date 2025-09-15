#include<iostream>
using namespace std;
template<class T>
class sample
{
    private:
    T a , b ,s ,p;
    public:
    sample(T x ,T y)
    {
        a=x;
        b=y;
    }
    void calculate()
    {
        s=a+b;
        cout<<"Addition of two numbers is "<<s <<endl;
    
        p=a*b;
        cout<<"Product of two numbers is "<<p<<endl;
    }

};
int main()
{
    sample<int>s1(1,2);
    sample<float>s2(1.2,3.4);
    cout<<"For the integer numbers"<<endl;
    s1.calculate();
    cout<<"For the floating numbers"<<endl;
    s2.calculate();
    return 0;
}