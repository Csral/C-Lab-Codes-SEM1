#include <stdio.h>

int main(void) {
	int n;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	printf("The number is %s\n", (n % 2 == 0) ? "even" : "odd");

	return 0;
}