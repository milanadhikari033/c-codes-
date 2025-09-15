/*#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*top=NULL;
void push(int x)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->link=top;
	top=newnode;	
}
void display()
{
	struct node*temp;
	temp=top;
	if(top==NULL)
	{
		printf("Stack is empty\n");
	}
	else{
		while(temp!=0)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
			
		}
	}
}
void peek()
{
	if(top==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("top element is %d\n",top->data);
		
	}
	
}
void pop()
{
	struct node*temp;
	temp=top;
	if(top==NULL)
	{
		printf("Stack is empty\n");
	}
	else
		top=top->link;
	
	free(temp);
	
}
int main()
{
	push(20);
	push(30);
	push(40);
	display();
	peek();
	pop();
	pop();
	display();
	peek();
	return 0;
}


#include<stdio.h>
int main() {
    char stack[3][50];        // small stack
    int top = -1;

    top++; sprintf(stack[top], "Visited: Home");       // push
    top++; sprintf(stack[top], "Visited: Students");    // push

    top--;       // pop

    printf("Now at: %s\n", stack[top]);       // goes back to Home

    return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*link;
	int data;
};
struct node*top=NULL;
void push(int x)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof (struct node));
	newnode->data=x;
	newnode->link=top;
	top=newnode;
}
void display()
{
	struct node*temp;
	temp=top;
	if(top==NULL)
	{
		printf("Queue is empty\n");
	}
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}
void pop()
{
	struct node*temp;
	temp=top;
	if(top=NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("%d\t",top->data);
		top=top->link;
	
	free(temp);
}
int main()
{
	push(30);
	push(40);
	push(50);
	push(60);
    display();
	pop();
	pop();
	pop();
	display();
	return 0;
}
