#include <stdio.h>

int fact(int);

int main(void) {
	
	int a;
	
	printf("Enter the number: ");
	scanf("%d", &a);
	
	printf("The factorial of the number is %d\n", fact(a));

	return 0;
}

int fact(int a) {
	
	if (a < 2)
		return 1;
	
	return a*fact(a-1);
};