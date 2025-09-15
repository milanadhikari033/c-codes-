#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
    void getnum(int num)
    {
        x=num;
    }
    void display()
    {
        cout<<"Value of x ="<<x<<endl;
    }
    friend void swap(A & , B & );
};
class B
{
    int y;
    public:
    void getnum(int num)
    {
        y=num;
    }
    void display()
    {
        cout<<"value of y ="<<y<<endl;
    }
    friend void swap(A & , B&);
};
void swap(A&m  ,B&n)
{
    int temp;
    temp=m.x;
    m.x=n.y;
    n.y=temp;
};
int main()
    {
        A p;
        B q;
        p.getnum(10);
        q.getnum(20);
        cout<<"Values before swapping "<<endl;
        p.display();
        q.display();
         cout<<"Values after swapping "<<endl;
         swap(p,q);
        p.display();
        q.display();
        return 0;

    }