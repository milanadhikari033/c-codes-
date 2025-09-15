/* 1
#include<iostream>
using namespace std;
class vechicle2;
class vechicle1
{
    private:
    float price;
    public:
    void setprice(float p)
    {
        price =p;
    }
friend void max(vechicle1 v1, vechicle2 v2);
};
class vechicle2
{
    private:
    float price;
    public:
    void setprice(float p)
    {
        price=p;
    }
friend void max(vechicle1 v1 , vechicle2 v2);
};
void max(vechicle1 v1 , vechicle2 v2)
{
    cout<<"The maximum price is "<<endl;
    if(v1.price>v2.price)
    {
        cout<<v1.price<<endl;
    }
    else
    cout<<v2.price<<endl;
}
int main()
{
    vechicle1 car;
    vechicle2 bike;
    car.setprice(1000);
    bike.setprice(3330);
    max(car ,bike);
    return 0;
}



//2
#include<iostream>
using namespace std;
class B;
class A
{
	private:
	int x ;
	public:
	void getdata()
	{
		 cout<<"Enter the value of x "<<endl;
		 cin>>x;
	}
	void display()
	{
		cout<<"x="<<x<<endl;
	}
	friend void swap(A & ,B &);
};
class B
{
	private:
	int y;
	public:
	void getdata()
	{
		cout<<"Enter the value of the y"<<endl;
		cin>>y;
	}
	void display()
	{
		cout<<"y="<<y<<endl;
	}
	friend void swap(A & ,B &);
};
void swap ( A & m , B & n)
{
	int temp;
	temp=m.x;
	m.x=n.y;
	n.y=temp;
}
int main()
{
	A p;
	B q;
	p.getdata();
	q.getdata();
	cout<<"Values before swaping"<<endl;
	p.display();
	q.display();
	swap(p,q);
	cout<<"Values after the swap"<<endl;
	p.display();
	q.display();
	return 0;
}

3
#include<iostream>
using namespace std;
class complex
{
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
		cout<<imag<<"+"<<real<<"i"<<endl;
	}
	friend complex addcomplex( complex c1 , complex c2);	
};
complex addcomplex(complex c1 ,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.imag=c1.imag+c2.imag;
	return temp;
}
int main()
{
	complex c1(2 ,3);
	cout<<"For the first complex number"<<endl;
	c1.display();
	complex c2(3 ,2);
	cout<<"For the second complex number"<<endl;
	c2.display();
	complex sum;
	sum=addcomplex(c1,c2);
	cout<<"For the resulting complex number"<<endl;
	sum.display();
	return 0;
	 
}
4
#include<iostream>
using namespace std;
class Complex
{
	int *real , *imag;
	public:
	Complex()
	{
		real=new int ;
		imag=new int ;
		*real=0;
		*imag=0;	
	}
	Complex(int i , int r)
	{
		real=new int;
		*real=r;
		imag=new int;
		*imag=i;
	}
	void display()
	{
		cout<<*real<<"+"<<*imag<<"i"<<endl;
	}
	void addcomplex(Complex c1 , Complex c2)
	{
		*real=*c1.real+*c2.real;
		*imag=*c1.imag+*c2.imag;
	}
	~Complex()
	{
		delete real;
		delete imag;
	}
};
int main()
{
	Complex c1(22 ,44);
	Complex c2(10, 22);
	Complex c3;
	cout<<"For the first complex number"<<endl;
	c1.display();
	cout<<"For the second complex number"<<endl;
	c2.display();
	c3.addcomplex(c1, c2);
	cout<<"The resultant complex number is "<<endl;
	c3.display();
	return 0;
}

#include<iostream>
using namespace std;
class SimpleInterest
{
	private:
	float principle , SI ,rate, time;
	public:
	void getdata()
	{
		cout<<"Enter the principle amount:"<<endl;
		cin>>principle;
		cout<<"Enter the time period:"<<endl;
		cin>>time;
	}
	void calculate(float rate =8)
	{
		SI=principle*time* rate/100;
	}
	void display()
	{
		cout<<"The simple interest amount:"<<SI<<endl;
	}
};
int main()
{
	int i ;
	SimpleInterest s;
	for(i=0;i<3;i++)
	{
		cout<<"For simple interest of person "<<i+1<<endl;
		s.getdata();
		s.calculate();
		s.display();
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int i ,n ,*ptr,sum=0;	
	cout<<"How many numbers would you like to enter"<<endl;
	cin>>n;
	ptr=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter numbers:"<<i+1<<endl;
		cin>>ptr[i];
	}
	cout<<"The sum of the "<<n<<" numbers:"<<endl;
	for(i=0;i<n;i++)
	{
		sum=sum+ptr[i];
		
	}
	cout<<sum<<endl;
	return 0;
}

#include<iostream>
using namespace std;
class test
{
	private:
	int code;
	static int count;
	public:
	void setcode()
	{
		code = ++ count;
	}
	void showcode()
	{
		cout<<"Code="<<code<<endl;
	}
	static void showcount()
	{
		cout<<"Count="<<count<<endl;
	}
};
int test::count;
int main()
{
	test t1, t2, t3;
	t1.setcode();
	t2.setcode();
	test::showcount();
	t3.setcode();
	test::showcount();
	t1.showcode();
	t2.showcode();
	t3.showcode();
	return 0;
}

#include<iostream>
using namespace std;
class employee
{
	int eid;
	float salary;
	public:
	void getdata()
	{
		cout<<"Enter the eid  of the employee"<<endl;
		cin>>eid;
		cout<<"Enter the salary of the employee"<<endl;
		cin>>salary;
	}
	void display()
	{
		cout<<"The eid of the employee:"<<eid<<endl;
		cout<<"The salary of the employee :"<<salary<<endl;
	}
};
class company
{
	char name[30];
	char department[50];
	employee e;
	public:
	void getdata()
	{
		e.getdata();
		cout<<"Enter the name of the company"<<endl;
		cin>>name;
		cout<<"Enter the departmnt of the company"<<endl;
		cin>>department;
	}
	void display()
	{
	e.display();
	cout<<"The name of the company :"<<name<<endl;
	cout<<"The department of the company:"<<department<<endl;
	}
};
int main()
{
	company c;
	c.getdata();
	c.display();
	return 0;
}

#include<iostream>
using namespace std;
class sample
{
	int x ,y ,z;
	public:
	void getdata()
	{
		cout<<"Enter the values of the x , y and z"<<endl;
		cin>>x>>y>>z;
	}
	void display()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
	}
	void operator -()
	{
		x=-x;
		y=-y;
		z=-z;
	}
};
int main()
{
	sample x;
	x.getdata();
	x.display();
	-x;
	x.display();
	return 0;
	
}


#include <iostream>
#include<math.h>
using namespace std;
class Rectangle
{
private:
float xco;
float yco;
public: 
Rectangle()
{
xco=0.0;
yco=0.0;
}
Rectangle(float x,float y)
{
xco=x;
yco=y;
}
void display()
{
cout<<"("<<xco<<","<<yco<<")"<<endl;
}
};
class Polar
{
private:
public:
float radius;
float angle;
Polar()
{
radius=0.0;
angle=0.0;
}
Polar(float r,float a)
{
radius=r;
angle=a;
}
void display()
{
cout<<"("<<radius<<","<<angle<<")"<<endl;
}
operator Rectangle()
{
float x=radius*cos(angle);
float y=radius*sin(angle);
return Rectangle(x,y);
}
};
int main()
{
Polar p(10.0,0.758539);
Rectangle r;
r=p;
cout<<"Polar coordinates=";
p.display();
cout<<"Rectangular coordinates=";
r.display();
return 0;
}

#include<iostream>
using namespace std;
class Height 
{
	float inches;
	int feet;
	public:
	Height()
	{
		
	}
	Height(float m)
	{
	 float f = 3.28083*m;
	 feet = int(f);
	 inches=f-feet;
	}
	void display()
	{
		cout<< feet<<" feet and inches "<<inches<<endl;
	}

};
int main()
{
	float meter;
	Height h;
	cout<<"Enter the height of the person in meter"<<endl;
	cin>>meter;
	h =meter;
	cout<<"Height of the person in the feet and inches:"<<endl;
	h.display();
	return 0;	
}

#include<iostream>
using namespace std;
int main()
{
	int a , b ,x;
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;
	x=b-a;
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
	catch( int x)
	{
		cout<<"Exception caught: divide by zero"<<endl;
	}
	cout<<"END";
	return 0;
	
}

#include<iostream>
using namespace std;
void test( int x )
{
	try 
	{
		if(x==1)
		{
			throw x ;
		}
		else if(x==0)
		{
			throw 'x';
		}
		else if(x==-1)
		{
			throw 1.0;
		}
		cout<<"End of the try throw system"<<endl;
	}
	catch ( char c)
	{
		cout<<"Caught an character"<<endl;
	}
	catch  (int x)
	{
		cout<<"Caught an interger"<<endl;
	}
	catch (double x)
	{
		cout<<"Caught an double"<<endl;
	}
cout<<"End of the try caught system"<<endl;
};
int main()
{
	cout<<"Testing multiple files"<<endl;
	cout<<"x==1"<<endl;
	test(1);
	cout<<"x==0"<<endl;
	test(0);
	cout<<"x==-1"<<endl;
	test(-1);
	cout<<"x==2"<<endl;
	test(2);
	return 0;
}

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream outfile("userinfo.txt");
char name[20];
int age;
cout<<"Enter the name:";
cin>>name;
outfile<<name<<endl;
cout<<"Enter the age:";
cin>>age;
outfile<<age<<endl;
outfile.close();
ifstream infile("userinfo.txt");
infile>>name;
infile>>age;
cout<<"Name of the user:"<<name<<endl;
cout<<"Age of the user :"<<age<<endl;
infile.close();
return 0;
}
#include<iostream>
using namespace std;
class B
{
	public:
	virtual void show()
	{
		cout<<"Base class"<<endl;
	}
};
class D : public B
{
	public:
	void show()
	{
		cout<<"Derived class"<<endl;
	}
};
int main()
{
	B b1;
	D d1;
    B *bptr;
    cout<<"bptr points the base"<<endl;
    bptr=&b1;
    bptr->show();
    cout<<"bptr points the derive"<<endl;
    bptr=&d1;
    bptr->show();
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("country");
	fout<<"Nepal"<<endl;
	fout<<"India"<<endl;
	fout.close();
	fout.open("capital");
	fout<<"Kathmandu"<<endl;
	fout<<"New Delhi"<<endl;
	fout.close();
	char line[50];
	ifstream fin;
	fin.open("country");
	cout<<"Components of the country file:"<<endl;
	while(fin)
	{
		fin.getline(line ,50);
		cout<<line<<endl;
	}
	fin.close();
	fin.open("capital");
	cout<<"Components of the capital"<<endl;
	while(fin)
	{
		fin.getline(line ,50);
		cout<<line<<endl;
	}
	return 0;
	
	
}*/
#include<iostream>
using namespace std;
class A 
{
    public:
    int a;
};
class B:virtual public A
{
    public:
    int b;
};
class C:virtual public A{
    public:
    int c;
};
class D:public B,public C{
    public:
    int d;
};
int main ()
{
    D obj;
    obj.a=10;
    
    obj.b=20;
    obj.c=30;
    obj.d=40;
    cout<<"A="<<obj.a<<endl;
    cout<<"B="<<obj.b<<endl;
    cout<<"C="<<obj.c<<endl;
    cout<<"D="<<obj.d<<endl;
    return 0;
}

