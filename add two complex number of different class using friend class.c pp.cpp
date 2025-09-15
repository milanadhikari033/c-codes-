#include<iostream>
using namespace std;

class complex2; 
class complex1 
{
    private:
    int r1, i1;

public:
    void getdata() 
	{
        cout << "Enter real and imaginary part for complex 1: "<<endl;
        cin >> r1 >> i1;
    }

     friend class complex2;
};

class complex2 
{
private:
    int r2, i2;

public:
    void getdata() 
	{
        cout << "Enter real and imaginary part for complex 2: "<<endl;
        cin >> r2 >> i2;
    }

    void sum(complex1 c1)
	 {
        r2 = r2 + c1.r1;
        i2 = i2 + c1.i1;
        cout << "Sum = " << r2 << " + " << i2 << "i" << endl;
    }
};

int main()
 {
    complex1 c1;
    complex2 c2;

    c1.getdata();
    c2.getdata();

    c2.sum(c1);

    return 0;
}


