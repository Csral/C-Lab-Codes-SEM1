#include <stdio.h>

int main(void) {

	int n = 1;
	
	int fact = 1;

	printf("Enter the number: ");
	scanf("%d", &n);
	
	for (int i = n; i > 0; i--) fact *= i;
	
	printf("The factorial of %d is %d\n", n, fact);
	
	return 0;

};