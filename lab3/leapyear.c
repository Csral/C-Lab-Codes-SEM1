#include <stdio.h>

int main(void) {
	
	int x;
	
	printf("Enter the year: ");
	scanf("%d", &x);
	
	printf("%s\n", (x % 4 == 0) ? "It is a leap year" : "It is not a leap year");
	
	return 0;

};