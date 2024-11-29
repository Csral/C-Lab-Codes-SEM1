#include <stdio.h>

int main(void) {
	int n;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	printf("The number is %s\n", (n < 0) ? "negative" : (n == 0) ? "0" : "positive");

	return 0;
}