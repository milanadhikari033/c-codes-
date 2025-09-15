#include<iostream>
using namespace std;
# define MAX_SIZE 10
template<class T>
class stack
{
	int top;
	T stk[MAX_SIZE];
	public:
	stack()
	{
		top=-1;
	}
	void push(T data)
	{
		if(top==MAX_SIZE -1)
		{
			cout<<"Stack is full"<<endl;
		}
		else
		{
			top++;
			stk[top]=data;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack is empty"<<endl;
		}
		else
		{
			top--;
		}
	}
	void show()
	{
		for(int i= top;i>0;i--)
		{
			cout<<"stk["<<i<<"]="<<stk[i]<<endl;
		}
	}
	
};
int main()
{
	stack<char> s;
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');
	s.show();
	cout<<"Popped top"<<endl;
	s.pop();
	s.pop();
	s.show();
	return 0;
	
}
