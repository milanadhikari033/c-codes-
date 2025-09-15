#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile("userinfo.txt");
	char name[30];
	int age;
	cout<<"Enter the name of the user"<<endl;
	cin.getline(name , 30);
	cout<<"Enter the age of the user"<<endl;
	cin>>age;
	outfile<<name<<endl;
	outfile<<age<<endl;
	outfile.close();
	ifstream infile("userinfo.txt");
	infile.getline(name,30);
	infile>>age;
	cout<<"Name of the user is "<<name<<endl;
	cout<<"Age of the user is "<<age<<endl;
	infile.close();
	return 0;
  	
}
