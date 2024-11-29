#include <stdio.h>

void sum();
void sum1(int, int);
int sum2();
int sum3(int, int);


int main()
{
	int a,b;
	printf("Enter the two numbers seperated by space: ");
	scanf("%d%d",&a,&b);
	sum1(a, b);
	printf("The sum is %d\n", sum3(a, b));
	printf("The sum is %d\n", sum2());
	sum();	
}

void sum()
{
	int a,b;
	printf("Enter the two numbers seperated by space; ");
	scanf("%d%d",&a,&b);
	printf("The sum is %d\n",a+b);
}

void sum1(int a, int b)
{
	printf("The sum is %d\n",a+b);
}

int sum2()
{
	int a,b;
	printf("Enter the two numbers seperated by space; ");
	scanf("%d%d",&a,&b);
	return a+b;
}

int sum3(int a, int b)
{
	return a+b;
}
