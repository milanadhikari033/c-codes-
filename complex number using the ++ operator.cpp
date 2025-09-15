#include<iostream>
using namespace std;

class complex
{
    public:
    float real, imag;

    complex()
    {
        real = 0;
        imag = 0;
    }

    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;

    // Assigning values manually
    c1.real = 3;
    c1.imag = 4;

    c2.real = 1;
    c2.imag = 2;

    c3 = c1 + c2;

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}

