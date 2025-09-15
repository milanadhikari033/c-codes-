#include<iostream>
using namespace std;
class complex
{
  int real , imag;
  public:
  void getdata()
  {
    cout<<"Enter the real and imaginary part"<<endl;
    cin>>real>>imag;
  }
  void addition(complex t1 , complex t2)
  {
    real=t1.real+ t2.real;
    imag=t1.imag+t2.imag;
  }
  void display()
  {
    cout<<real<<"i+"<<imag<<endl;
  }
};
int main()
{
    complex t1,t2,t3;
    cout<<"For the first complex number"<<endl;
    t1.getdata();
    cout<<"For the second complex number"<<endl;
    t2.getdata();
    t3.addition(t1, t2);
    t3.display();
    return 0;
}
