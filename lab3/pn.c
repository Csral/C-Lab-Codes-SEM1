#include <stdio.h>

int main(void) {

	int n;

	printf("Enter the number: ");
	scanf("%d",&n);

	(n < 0) ? printf("The number is negative\n") : printf("The number is positive\n");

	return 0;

};