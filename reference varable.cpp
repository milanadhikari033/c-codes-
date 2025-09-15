#include<iostream>
using namespace std;
int main()
{
    float total=200;
    float & sum=total;
    cout<<"Total="<<total<<endl;
    cout<<"sum="<<sum<<endl;
    total =total + 50;
    cout<<"Total="<<total<<endl;
    cout<<"sum="<<sum<<endl;
    return 0;
}