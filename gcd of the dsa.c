/*#include<stdio.h>
int gcd(int a , int b)
{
	if(b==0)
	{
		return a;
	}
	else
	return gcd(b,a%b);
}
int main()
{
	int num1,num2,hcf;
	printf("Enter the first number\n");
	scanf("%d",&num1);
	printf("Enter the second number\n");
	scanf("%d",&num2);
	hcf=gcd(num1,num2);
	printf("The gcd of the %d and %d is %d",num1,num2,hcf);
	return 0;
	
}
#include<stdio.h>
int NaturalSum(int n)
{
	if(n==0)
	{
	 return 0;	
	}
	else
	{
		return n+ NaturalSum(n-1);
	}
}
int main()
{
	int number, total;
	printf("Enter the number of what you want to sum of the natural nunber\n");
	scanf("%d",&number);
	total=NaturalSum(number);
	printf("The sum of %d natural numbers is %d",number,total);
	return 0;
}

#include<stdio.h>
void toh(int n,char from ,char to ,char temp)
{
	if(n>0)
	{
		toh(n-1,from,temp,to);
		printf("Move the disk %d from %c to %c\n",n,from ,to);
		toh(n-1,temp,to,from);
	}
}
int main()
{
	int number;
	printf("Enter the number of the disk\n");
	scanf("%d",&number);
	toh(number,'S','D','T');
	return 0;
}
#include<stdio.h>
int fibo(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n,i,result;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	result=fibo(i);
	printf("%d\t",result);	
	}
	return 0;
	
}*/
#include<stdio.h>
#define MAX 20;
int stack[MAX];
int top=-1;
void push(int x)
{
	if(top==MAX-1)
	{
	 printf("Stack is full\n");	
	}
	else
	{

			
		}
	}
}
