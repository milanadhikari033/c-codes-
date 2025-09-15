//Implementation of the singly linked list using the c++ codes
/*
#include<iostream>
using namespace std;
class Node
{
    public:
    int data ;
    Node*next;
    Node (int val)
    {
        data=val;
        next=NULL;
    }
};
class List 
{
    private:
    Node*head;
    Node*tail;
    public:
    List()
    {
        head=tail=NULL;
    }
    void pushfront(int val)
    {
        Node*newnode= new Node(val);
        if(head ==NULL)
        {
            head=tail=newnode;
        }
        else 
        {
            newnode->next=head;
            head=newnode;
        }
    }
    void popfront()
    {
        if(head==NULL)
        {
            cout<<"Your linked list is already empty "<<endl;
            return ;
        }
        Node*temp;
        temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }   
    void popback()
    {
        if (head=NULL)
        {
            cout<<"Your linklist is already empty"<<endl;
            return;
        }
        Node*temp;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"";
            temp=temp->next;
        }
        cout<<"endl";
    }
    void printll() 
	{
        Node* temp = head;
        while (temp != NULL) 
		{
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    cout<<"The nodes which are pushed from front of the list are"<<endl;
    ll.printll();
    ll.popback();
    cout<<"The nodes after poped  from the back of the list"<<endl;
    ll.printll();
    ll.popfront();
     cout<<"The nodes after poped from the back of the list"<<endl;
    ll.printll();
  return 0;
    
}

#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;

    Node(int val) 
	{
        data = val;
        next = NULL;
    }
};

class List 
{
private:
    Node* head;
    Node* tail;

public:
    List() 
	{
        head = tail = NULL;
    }

    void pushfront(int val)
	 {
        Node* newnode = new Node(val);
        if (head == NULL) 
		{
            head = tail = newnode;
        } 
		else
		 {
            newnode->next = head;
            head = newnode;
        }
    }

    void popfront() 
	{
        if (head == NULL) 
		{
            cout << "Your linked list is already empty." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void popback() 
	{
        if (head == NULL) 
		{
            cout << "Your linked list is already empty." << endl;
            return;
        }
        if (head->next == NULL) 
		{  // Only one node
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next->next != NULL) 
		{
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        tail = temp;
    }

    void printll() 
	{
        Node* temp = head;
        while (temp != NULL) 
		{
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(
) {
    List ll;
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);

    cout<<"The nodes which are pushed from front of the list are:" << endl;
    ll.printll();

    ll.popback();                                            // Removed last node
    cout << "The nodes after popping from the back of the list:" << endl;
    ll.printll();

    ll.popfront();                                          // Removed first node
    cout << "The nodes after popping from the front of the list:" << endl;
    ll.printll();

    return 0;
}

#include<stdio.h>
long int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else 
	{
		return(n* fact(n-1));
	}
}
int main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  printf("Factorial of the number =%d",fact(num));
  return 0;
}

#include<stdio.h>
int gcd(int a , int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int main()
{
	int num1,num2,hcf;
	printf("Enter the two numbers\n");
	scanf("%d %d",&num1,&num2);
	hcf=gcd(num1,num2);
	printf("GCD of the %d ,%d is %d",num1,num2,hcf);
	return 0;
}

#include<stdio.h>
void toh(int n ,char from , char to, char temp)
{
	if (n>0)
	{
		toh(n-1,from,temp,to);
		printf("Move the disk %d from %c to %c\n",n,from, to);
		toh(n-1, temp, to , from);
	}
	
}

int main()
{
	int n;
	printf(" Enter the number of the disk\n");
	scanf("%d",&n);
	printf("\n");
	toh(n ,'A','B','C');
	return 0;
	
}
*/
#include<stdio.h>
int sum(int n)
{
	if(n==1)
	return 1;
	else
	{
		return n+ sum(n-1);
	}
}
int main()
{
	int natural,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	natural= sum(n);
	printf("The sum of %d the natural number is %d",n,natural);
	return 0;
}

