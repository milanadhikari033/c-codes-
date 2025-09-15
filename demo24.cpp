#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
	char name[30];
	float salary;
	char position[30];
	int eid;
	public:
	void input()
	{
		cin.ignore();
		cout<<"Enter the name of the employee"<<endl;
		cin.getline(name,30); 
		cout<<"Enter the salary of the employee"<<endl;
		cin>>salary;
		cin.ignore();
		cout<<"Enter the position of the employee"<<endl;
		cin.getline(position,30);
		cout<<"Enter the eid of the employee"<<endl;
		cin>>eid;
	}
	void display()
	{
		if(salary<25000)
		{
			cout<<"The name of the employee:"<<name<<endl;
			cout<<"The salary of the employee:"<<salary<<endl;
			cout<<"The position of the employee:"<<position<<endl;
			cout<<"The eid of the employee:"<<eid<<endl;
		}
	}
};
int main()
{
  Employee e[100];
  int n;
  cout<<"Enter the number of the employee"<<endl;
  cin>>n;
  fstream file;
  file.open("employee.dat",ios::in|ios::out|ios::binary);
  
  for(int i=0;i<n;i++)
  {
  	cout<<"Enter the employee of "<<i+1<<" employee"<<endl;
  	e[i].input();
  	file.write((char*)&e[i],sizeof (e[i]));
  	
  }	
  file.seekg(0);
  cout<<"The emplyoee's which salary is greater than 25000 are"<<endl;
  for(int i=0;i<n;i++)
  {
  	file.read((char*)&e[i],sizeof (e[i]));
  	e[i].display();
  }
  return 0;
}

