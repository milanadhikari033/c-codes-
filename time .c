#include<iostream>
using namespace std;
class time
{
	private:
		int seconds, minute,hour;
		public:
			

void gettime()
{
  cout<<"Enter the hours"<<endl;
  cin>>hours;
  cout<<" Enter the minutes"<<endl;
  cin>>minutes;
  cout<<"Enter the seconds"<<endl;
  cin>>seconds;
} void display()
{
	cout<<hours:<<"hour"<<minutes:<<"minutes"<<seconds:<<"second"<<endl;
}
void addtime (t1 , t2)
{
seconds=t1.seconds + t2.seconds; 
minutes=seconds/60;	
seconds=seconds%60;
minutes=minutes + t1.minutes + t2.minutes;
hours= minutes/60;
minutes= minutes%60;
hours= hours + t1.hours + t2.hours;

}
};
int main()
{
	time t1 ,t2, t3;
	cout<<"For time t1"<<endl;
	t1.gettime();
	cout<<"For time t2"<<endl;
	t2.gettime();
	t3.addtime(t1 , t2);
	cout<<"the resultant time is:"<<endl;
	t3.display();
	return 0
}


