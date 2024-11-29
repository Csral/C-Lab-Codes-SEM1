#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int r = 1, n = 1;
	
	while (true) {
		printf("Enter the no: ");
		scanf("%d", &r);
		if (r % 5 == 0) break;
		n *= r;
	}
	
	printf("The product is: %d\n", n);
	
	return 0;

};