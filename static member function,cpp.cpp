/*#include<iostream>
using namespace std;
class test
{
	int code;
	static int count;
	public:
	void setcode()
	{
		code=++count;
	}
	void showcode()
	{
		cout<<"code="<<code<<endl;
	}
	static void showcount()
	{
		cout<<"count="<<count<<endl;
	}
};
int test::count;
int main()
{
	test t1, t2;
	t1.setcode();
	t2.setcode();
	test::showcount();
	test t3;
	t3.setcode();
	test::showcount();
	t1.showcount();
	t2.showcount();
	t3.showcount();
	return 0;
	
}

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
        cout<<"Enter the details of the employee:"<<i+1<<endl;
        e[i].getdata();
    }
    for(i=0;i<50;i++)
    {
        cout<<"details of the employee:"<<i+1<<endl;
        e[i].display();
    }
    return 0;
}
*/
#include<iostream>
#include<fstream>
using namesapce std;
class Students
{
    private:
    char name[30];
    char address[30];
    int roll;
    public:
    void input()
    {
        cout<<"Enter the name of the student"<<endl;
        cin>>name;
        cout<<"Enter the address of the student"<<endl;
        cin>>address;
        cout<<"Enter the roll number of the student"<<endl;
        cin>>roll;
    }
    void display()
    {
        if(strcmp(address,"kathmandu")==0)
        {
            cout<<"Name of student is "<<name<<endl;
            cout<<"Address of student is "<<address<<endl;
            cout<<"Roll number of student is "<<roll<<endl;
        }
    }

};
int main()
{
    int n, i;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    Employee e;
    fstream file;
    cout<<"Enter the details of "<<n<<"students:"<<endl;
    file.open("Employee.txt",ios::in||ios::out||ios::trunk||ios::binary);
    for(i=0;i<n;i++)
    {
        e[i].input();
        file.write((char*),&e[i],sizeof e[i]);
    }
    seekg(0);
    cout<<"Details of students whoose address is kathmadu:"<<endl;
    for(i=0;i<n;i++)
    {
        file.read((char*),&e[i],sizeof(e[i]));
        e[i].display();
    }
    return 0;
}
