#include <stdio.h>

int main(void) {

	int avg;
	
	printf("Enter the average marks: ");
	scanf("%d",&avg);

	if (avg > 80)
		printf("A\n");
	else if (avg > 60)
		printf("B\n");
	else if (avg > 40)
		printf("C\n");
	else
		printf("F\n");

	return 0;

};