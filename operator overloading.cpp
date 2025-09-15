#include<iostream>
using namespace std;
class Employee
{
    private:
    char name[30];
    int id;
    char address[30];
    float salary;
    char department[40];
    public:
    void getdata()
    {
        cout<<"Enter name of employee "<<endl;
        cin>>name;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
        cout<<"Enter the address of employee"<<endl;
        cin>>address;
        cout<<"Enter the salary of employee"<<endl;
        cin>>salary;
        cout<<"Enter the department of the employee"<<endl;
        cin>>department;
    }
    void display()
    {
        if(salary>55000)
        {
            cout<<"Name of the employee is "<<name<<endl;
            cout<<"Employee id is "<<id <<endl;
            cout<<"Address of the employee is "<<address<<endl;
            cout<<"Salary of the employee is "<<salary<<endl;
            cout<<"Department of the employee is "<<department<<endl;
        }
    }
};
int main()
{
    Employee e[50];
    int i;
    for(i=0;i<50;i++)
    {
        cout<<"Enter the details of the employee:"<<(i+1)<<endl;
        e[i].getdata();
    }
    for(i=0;i<50;i++)
    {
        cout<<"details of the employee:"<<(i+1)<<endl;
        e[i].display();
    }
    return 0;
}





/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream  outfile("ITEM");
    char name[30];
    int cost;
    cout<<"Enter the name of item"<<endl;
    cin>>name;
    outfile<<name<<endl;
    cout<<"Enter the cost of item"<<endl;
    cin>>cost;
    outfile<<cost<<endl;
    outfile.close();
    ifstream infile("ITEM");
    infile>>name;
    infile>>cost;
    cout<<"Name of the item is "<<name <<endl;
    cout<<"Cost of the item is "<<cost<<endl;
    infile.close();
    return 0;
}

*/










/*#include<iostream>
using namespace std;
int main()
{
    int a , b,x;
    cout<<"ENter the values of a and b "<<endl;
    cin>>a>>b;
    x=a-b;
    try 
    {
        
    if(x!=0)
    {
        cout<<"Result(a/x)="<<a/x;
    }
    else
    {
        throw(x);
        
    }
}
    catch(int i)
    {
        cout<<"Exception caught divide by zero"<<endl;
    }
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
class Polar 
{
    private:
    float angle , radius;
    public:
    Polar()
    {}
    Polar(float a , float r)
    {
        angle=a;
        radius=r;
    }
    void display()
    {
        cout<<"("<<angle<<","<<radius<<")"<<endl;
    }
   
};
class Rectangle
{
    private:
    float xco,yco;
    public:
    Rectangle()
    {}
    Rectangle(float x , float y)
    {
        xco=x;
        yco=y;
    }
    void  display()
        {
            cout<<"("<<xco<<","<<yco<<")"<<endl;
        }
   operator Polar()
   {
    float angle=atan(xco/yco);
    float radius= sqrt(xco*xco+yco*yco);
    return Polar (angle, radius);
   }
};

int main()
{
    Polar p;
    Rectangle r(2 , 3);
    p=r;
    cout<<"Polar coordinates:"<<endl;
    p.display();
    cout<<"Rectangle coordinates:"<<endl;
    r.display();
    return 0;
}

#include<iostream>
using namespace std;
class Height
{
    private:
    int feet;
    float inch;
    public:
    Height()
    {

    }
    Height(float m)
    {
        float f=3.28023*m;
        feet=int(f);
        inch=(f-feet)*12;
    }
    void display()
    {
        cout<<feet<<" feet and "<<inch <<" inches "<<endl;
    }
};
int main()
{
    float meter;
    Height h1;
    cout<<"Enter the height in the meter "<<endl;
    cin>>meter;
    h1=meter;
    h1.display();
    return 0;
}

#include<iostream>
using namespace std;
class Employee
{
    private:
    int eid;
    float salary;
    public:
    Employee(int eid , float salary)
    {
        this->eid=eid;
        this->salary=salary;
    }
    void display()
    {
        cout<<"Employee eid is "<<eid<<endl;
        cout<<"Employee salary is"<<salary<<endl;
    }
};
int main()
{
    Employee e(23 , 200000.00);
    e.display();
    return 0;
}







#include<iostream>
using namespace std;
class space
{
    private:
    int a , b ,c ;
    public:
    void getdata()
    {
        cout<<"ENter the values of a , b and c"<<endl;
        cin>>a>>b>>c;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
    }
    friend void operator-(space &s);
};
    int  operator-(space &s)
    {
        s.a=-s.a;
        s.b=-s.b;
        s.c=-s.c;
        return s;
    }

int main()
{
    space s1,s2;
    s1.getdata();
    s1.display();
    s2=-s1;
    s2.display();
    return 0;
}*/
