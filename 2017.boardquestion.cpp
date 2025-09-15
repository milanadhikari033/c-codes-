/*Two time data from user .The add function 
that takes two class object an argument add them 
respectively then display the aggregate result ?
(Apply 60 seconds = 1minutes and 60 minutes= 1hours)*/

#include<iostream>
using namespace std;
class time
{
	private:
	int hours,minutes,seconds;
	public:
	time()
	{
	}
    time(int h,int m,int s )
	{
	hours=h;
	minutes=m;
	seconds=s;	
	}
	void display()
	{
     cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
	}
	void sum(time t1, time t2)
	{
		seconds=t1.seconds+t2.seconds;
		minutes=seconds/60;
		seconds=seconds%60;
		minutes=minutes+t1.minutes+t2.minutes;
		hours=minutes/60;
		minutes=minutes%60;
		hours=hours+t1.hours+t2.hours;	
	}
};
 int main()
 {

 	int sec1,sec2,min1,min2,hrs1,hrs2;
 	cout<<"Enter the first hours, minutes and seconds "<<endl;
 	cin>>hrs1>>min1>>sec1;
 	cout<<"Enter the second second hours , minutes and seconds"<<endl;
 	cin>>hrs2>>min2>>sec2;
 	time t1(hrs1,min1,sec1);
 	time t2(hrs2,min2,sec2);
 	time t3;
 	cout<<"The first time is "<<endl;
 	t1.display();
 	cout<<"The second time is "<<endl;
 	t2.display();
 	t3.sum(t1 ,t2);
 	cout<<"The resultant time is "<<endl;
 	t3.display(); 
 	return 0;
 	
 }
