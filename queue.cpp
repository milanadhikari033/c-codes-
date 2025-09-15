/*
#include<stdio.h>
#define MAX 3
int queue[MAX];
int rear=-1 , front=-1;
void enqueue(int value)
{
	if(rear==MAX-1)
	{
		printf("Queue is full\n");
	
	}
	else if(rear==-1 && front==-1)
	{
		front=rear=0;
		queue[rear]=value;
		printf("Enqueued %d\n",value);
	    
	}
	else
	{
	  rear++;
	  queue[rear]=value;
	  printf("Enqueued %d\n",value);	
	}
}
int dequeue()
{
	if(rear==-1&&front==-1)
	{
		printf("Queue is empty cannot queued\n");
		return -1;
	}
	else if(rear==front)
		{
			int value= queue[front];
			front=rear=-1;
			return value;	
		}
		else
		{
				int value=queue[front];
				front++;
				return value;
		}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(300);
	enqueue(40);
	printf("Dequeued %d\n",dequeue());
	printf("Dequeued %d\n",dequeue());	
	return 0;
}
#include <stdio.h>
#define MAX 3

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int element) {
    if ((rear + 1) % MAX == front) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {  // queue is empty
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = element;
    printf("Enqueued: %d\n", element);
}

int dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return -1;
    }
    int element = queue[front];
    if (front == rear) {  // queue has only one element
        front = rear = -1; // reset queue after dequeue
    } else {
        front = (front + 1) % MAX;
    }
    printf("Dequeued: %d\n", element);
    return element;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);  // queue is full after this

    enqueue(40);  // should print "Queue is full"

    dequeue();
    dequeue();

    enqueue(40);  // now this will work
    enqueue(50);  // should print "Queue is full" if over limit

    return 0;
}
#include<stdio.h>
#define MAX 3
int queue[MAX];
int rear=-1 , front=-1;
void enqueue(int value)
{
	if((rear+1) % MAX==front)
	{
	 printf("Queue is full \n");
	 return ;
	}
	 if(front==-1)
	 {
	 	front=0;
	 }
	 rear=(rear+1)%MAX;
	 queue[rear]=value;
	 printf("Enqueued:%d\n",value);	 
}
int dequeue()
{
	if(rear==-1&&front==-1)
	{
		printf("Queue is empty\n");
		return -1;
	}

    int	value=queue[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%MAX;
    }
		printf("Dequeued:%d\n",value);
		return value;
	
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	dequeue();
	enqueue(40);
	return 0;
}*/ 
#include<iostream>
using namespace std;
#define SIZE 10
class Queue
{
int a[SIZE];
int rear; //same as tail
int front; //same as head
public:
Queue()
{
rear = front = -1;
}
//declaring enqueue, dequeue and display functions
void enqueue(int x);
int dequeue();
void display();
};
// function enqueue - to add data to queue
void Queue :: enqueue(int x)
{
if(front == -1) {
front++;
}
if( rear == SIZE-1)
{
cout << "Queue is full";
}
else
{
a[++rear] = x;
}
}
// function dequeue - to remove data from queue
int Queue :: dequeue()
{
return a[++front]; // following approach [B], explained above
}
// function to display the queue elements


void Queue :: display()
{
int i;
for( i = front; i <= rear; i++)
{
cout << a[i] << endl;
}
}
// the main function
int main()
{
Queue q;
q.enqueue(10);
q.enqueue(100);
q.enqueue(1000);
q.enqueue(1001);
q.enqueue(1002);
q.dequeue();
q.enqueue(1003);
q.dequeue();
q.dequeue();
q.enqueue(1004);
q.display();
return 0;
}
