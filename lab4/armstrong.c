#include <stdio.h>
#include <math.h>

int main (void) {
	
	int n,temp, sum = 0;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	temp = n;
	
	while (temp != 0) {
		sum += pow(temp%10, 3);
		temp /= 10;
	}
	
	if (n == sum)
		printf("The number is an Armstrong\n");
	else
		printf("The number is not an Armstrong\n");

	return 0;

};