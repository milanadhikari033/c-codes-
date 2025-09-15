/*#include<stdio.h>
void toh(int n , char from ,char to ,char temp)
{
	if(n>0)
	{
		toh(n-1, from ,temp,to);
		printf("Moved the disk %d from the %c to %c",n,from,to);
		toh(n,temp,to,from);
	}
}
int main()
{
	int n;
	printf("Enter the number of the disk\n");
	scanf("%d",&n);
	printf("\n");
	toh(n,'A','B','C');
	return 0;
}
*/
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
	toh(n ,'S','D','T');

}
