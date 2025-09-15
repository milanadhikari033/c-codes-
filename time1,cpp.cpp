#include<iostream>
using namespace std;
class height
{
	private:
		int feet , inch;
	public:
	void getdata()
	{
	cout<<"Enter the height in feet"<<endl;
	cin>> feet;
	cout<<"Enter the height in inch"<<endl;
	cin>>inch;
		}
		void addtime(height h1, height h2)
		{
			inch= h1.inch+h2.inch;
			feet=inch/12;
			inch=inch%12;
			feet=h1.feet+h2.feet+feet;
		}
	void display()
	{
		cout <<"Feet="<<feet<<"Inch="<<inch<<endl;
		}	
};
int main()
{
	height h1,h2,h3;
	h1.getdata();
	h2.getdata();
	h3.addtime(h1,h2);
	h1.display();
	
	return 0;
}
