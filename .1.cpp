#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
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
            cout<<"Name:"<<name<<endl;
            cout<<"Address:"<<address<<endl;
            cout<<"Roll number:"<<roll<<endl;
        }
    }

};
int main()
{
    int n, i;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    Students s[100];
    fstream file;
  
    file.open("Employee.txt",ios::in|ios::out|ios::binary);
    for(i=0;i<n;i++)
    {
    	cout<<"Enter the details of student:"<<i+1<<endl;
        s[i].input();
        file.write((char*)&s[i],sizeof(s[i]));
    }
     
    cout<<"Details of students whoose address is kathmandu:"<<endl;
    for(i=0;i<n;i++)
    {
        file.read((char*)&s[i],sizeof(s[i]));
        s[i].display();
    }
    return 0;
}

