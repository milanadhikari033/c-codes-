#include<iostream>
using namespace std;
struct Person
{
    char name[30];
    int age;
    float salary;
};
int main()
{
    Persn p1;
    cout<<"Enter the name of the person"<<endl;
    cin.get(p1.name ,30);
    cout<<"Enter the age of the person"<<endl;
    cin>>p1.age;
    cout<<"Enter the salary of the person"<<endl;
    cin>>p1.salary;
    cout<<"Displaying the information:"<<endl;
    cout<<"The name of the person is "<<p1.name<<endl;
    cout<<"The age of the person is "<<p1.age<<endl;
    cout<<"The salary of the person is "<<p1.salary<<endl;
    return 0;

}