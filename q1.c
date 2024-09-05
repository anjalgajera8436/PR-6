#include<stdio.h>
#include<conio.h>

Void main(int a, int b)
{
	printf("sum of %d and %d is %d",a,b,a+b);
}

Void sub(int a, int b)
{
	printf("sub of %d and %d is %d",a,b,a-b);
}

Void multiply(int a, int b)
{
	printf("multiplyof %d and %d is %d",a,b,a*b);
}

Void division(int a, int b)
{
	printf("division of %d and %d is %d",a,b,a/b);
}

Void modul(int a, int b)
{
	printf("modul of %d and %d is %d",a,b,a%b);
}

void main()
{
	int choice a,b;
	printf("press 1 for + \n");
	printf("press 2 for - \n");
	printf("press 3 for * \n");
	printf("press 4 for / \n");
	printf("press 5 for % \n");
	printf("press 6 for exit \n\n");
	
	printf("enter your choice: \n");
	scanf("%d",&choice);
	printf("enter the 1st number: \n");
	scanf("%d",&a);
}

