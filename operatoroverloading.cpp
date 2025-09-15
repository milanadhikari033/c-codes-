/*#include<iostream>
using namespace std;
class fibo
{
    int a ,b,c;
    public:
    fibo()
    {
        a=-1;
        b=1;
        c=a+b;
    }
    void display()
    {
        cout<<c;
    }
    void operator ++()
    {
        a=b;
        b=c;
        c=a+b;
    }
};
int main()
{
    int i,n;
    fibo f;
    cout<<"Enter the number of terms"<<endl;
    cin>>n;
    for (i=1;i<n;i++)
    {
        f.display();
        if (i < n - 1) 
		{
		cout << ", ";
        }
        ++f;
    }
    return 0;
}
#include<iostream>
using namespace std;
class counter
{
	private:
	int count;
	public:
	void getdata(int x ){
		count =x;
	}
	void display()
	{
		cout<<"count="<<count<<endl;
	}
	counter operator++(int)
	{
		counter temp;
		temp.count=count++;
		return temp;
	}
};
int main()
{
	counter c1,c2;
	c1.getdata(43);
	cout<<"Values before postfix increment:"<<endl;
	c1.display();
	c2=c1++;
	cout<<"Values after postfix increment:"<<endl;
	c2.display();
	c1.display();	return 0;
	
}
#include<iostream>
using namespace std;
class fibo
{
	private:
	int a , b, c ;
	public:
	fibo()
	{
		a=-1;
		b=1;
		c=a+b;
	}
	void display()
	{
		cout<<c<<",";
	}
	void operator++()
	{
		a=b;
		b=c;
		c=a+b;
	}
};
int main()
{
	fibo f ;
	int i, n;
	cout<<"Enter the number of terms tou want to generate the fibonacci series"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		f.display();
		++f;
	}
	return 0;
}*/
#include<iostream>
#include<string.h>
using namespace std;
class Mystring 
{
	private:
	char name[50];
	public:
		Mystring ()
		{
			
		}
	Mystring (char n[])
	{
		strcpy(name,n);
	}
	void display()
	{
		cout<<name<<endl;
	}
	 Mystring operator+(Mystring s2)
	{
		Mystring s3;
		strcpy(s3.name,name);
		strcat(s3.name,s2.name);
		return s3;	
	}
};
	int main()
	{
		Mystring s1("Pradip ");
		Mystring s2("Paudel ");
		Mystring s3;
		s3=s1+s2;
		s3.display();
		return 0;
	}
	

