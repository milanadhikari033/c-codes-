/*#
include<iostream>
using namespace std;
class circularqueue
{
	private:
	int * arr;
	int cap,currentsize;
	int r,f;
	
	public:
	circularqueue(int size)
	{
		cap=size;
		arr=new int[cap];
		currentsize=0;
		f=0; 
		r=-1;
	}
	void enqueue(int data)
	{
		if(currentsize==cap)
		{
			cout<<"Capacity is full"<<endl;
			return ;
		}
		r=(r+1)%cap;
		arr[r]=data;
		currentsize++;
		
	}
	void dequeue()
	{
		if(empty())
		{
			cout<<"Queue is full"<<endl;
			return ;
		}
		f=(f+1)%cap;
		currentsize--;
		
	}
	int front()
	{
		if(empty())
		{
			cout<<"Queue is full"<<endl;
			return -1;
		}
		return arr[f];
	}
	bool empty()
	{
		return currentsize==0;
	}
	void display()
	{
		for(int i=0;i<cap;i++)
		{
			cout<<arr[i]<<endl;
		}
		cout<<endl;
	}
	
	
};
int main()
{
	circularqueue cq(3);
	cq.enqueue(1);
	cq.enqueue(2);
	cq.enqueue(3);
	cq.dequeue();
	cq.enqueue(4);
	cq.display();
    while(!cq.empty())
    {
    	cout<<cq.front()<<endl;
    	cq.dequeue();
	}
	
	return 0;
}*/
#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1, rear=-1;
void enqueue(int x)
{
	if((rear+1)%MAX==front)
	{
		printf("Queue is full\n");
		return;
	}
	if(front=-1)
	{
    front=0;
	}
	rear=(rear+1)%MAX;
	queue[rear]=x;
	printf("%d is enqueue in the circular queue\n",x);
}
int dequeue()
{
	if(front==-1)
	{
		printf("Queue is empty\n");
		return -1;
	}
	int element=queue[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	front=(front+1)%MAX;
	printf("%d dequeued\n",element);
	return element;	
}
int main()
{
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	dequeue();
	dequeue();
	dequeue();
	return 0;
}

