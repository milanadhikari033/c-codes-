/*#include<iostream>
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


*/ // 2
#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public:
	void setdata(int a)	
	{
		x=a;
	}

}

























































