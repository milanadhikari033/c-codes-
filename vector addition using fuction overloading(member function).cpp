//7
#include<iostream>
using namespace std;
class Vector
{
private:
 int x, y, z;
public:
Vector()
{
}
 Vector(int a, int b, int c)
 {
 x = a;
 y = b;
 z = c;
 }
Vector operator +(Vector v)
{
 Vector temp;
 temp.x = x + v.x;
 temp.y= y + v.y;
 temp.z = z + v.z;
 return temp;
}
void display()
{
cout<<x<<"i+"<<y<<"j+"<<z<<"k"<<endl;
}
};
int main()
{
 Vector v1(3,4,2);
 Vector v2(6,3,9);
 Vector v3;
 v3=v1+v2;
 cout<<"v1=" ;
 v1.display();
 cout<<"v2=" ;
 v2.display();
 cout <<"v1+v2=";
 v3.display();
 return 0;
}
