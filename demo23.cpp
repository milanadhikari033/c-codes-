#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("Country");
	fout<<"Nepal"<<endl;
	fout<<"India"<<endl;
	fout.close();
	fout.open("Capital");
	fout<<"Kathmandu"<<endl;
	fout<<"New Delhi"<<endl;
	fout.close();
	ifstream fin;
	char line[30];
	fin.open("Country");
	cout<<"Components of the country file"<<endl;
	while(fin)
	{
		fin.getline(line,30);
		cout<<line<<endl;
	}
	fin.close();
	fin.open("Capital");
	cout<<"Components of the capital file"<<endl;
	while(fin)
	{
		fin.getline(line,30);
		cout<<line<<endl;
	}
	fin.close();
	return 0;
}

