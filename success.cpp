#include<iostream>
using namespace std;
class complex
{
    private:
    int real , imag;
    public:
    complex()
    {

    }
    complex(int r , int i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    void addcomplex(complex c1 ,  complex c2 )
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
};
int main()
{
    complex c1(5 ,10);
    complex c2( 5 ,20);
    complex c3;
    c3.addcomplex(c1 ,c2);
    cout<<"For the first complex number:";
    c1.display();
    cout<<"For the second complex number:";
    c2.display();
    cout<<"The sum of the first and second complex number is ";
    c3.display();
    return 0;
}
