/*
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node*rear=NULL;
struct node*front=NULL;
void enqueue(int x)
{
	struct node*newnode;
	newnode =(struct node*)malloc (sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(front==0&&rear==0)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void display()
{
	struct node*temp;
	temp=front;
	if(front==0&rear==0)
	{
		printf("Queue is empty\n");
	}
	
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void dequeue()
{
	struct node*temp;
	temp=front;
	if(front==0&&rear==0)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("%d\t",front->data);
		front=front->next;
	}
	free(temp);	
}
void peek()
{
	if(front==0&&rear==0)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("%d\t",front->data);
    }
}
int main()
{
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	dequeue();
	peek();
	return 0;
}
#include<stdio.h>
#define MAX 30
int top=-1;
int stack[MAX];
void push(int value)
{
	if(top==MAX-1)
	{
		printf("Stack is overflow\n");
	}
	else
	top++;
	stack[top]=value;
	printf("%d is pushed in the stack\n",value);
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("%d is poped from the stack\n",stack[top]);
		top--;
	}
}
int main()
{
	push(20);
	push(30);
	push(40);
	pop();
	pop();
	return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;	
void enqueue(int x)
{
	struct node*newnode;
	newnode=(struct node*) malloc(sizeof (struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(front==0&&rear==0)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void display()
{
	struct node*temp;
	temp=front;
	if(front==0&rear==0)
	{
		printf("Queue is empty\n");
	}
	 while(temp!=0)
	{
	   printf("%d\t",temp->data);
	   temp=temp->next;
	}
}
void dequeue()
{
	struct node*temp;
	temp=front;
	if(front==0&rear==0)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("%d\t",front->data);
		front=front->next;
	}
	free(temp);	
}
int main()
{
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	display();
	dequeue();
	dequeue();
	dequeue();
}
