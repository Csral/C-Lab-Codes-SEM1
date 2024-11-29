#include <stdio.h>

int main(void) {

	int a, b, c, pt = 0;
	
	printf("Enter the coefficient separated by space: ");
	scanf("%d%d%d", &a, &b, &c);
	
	float d = b * b - (4 * a * c);
	pt += (b > 0) ? 20 : (b < 0) ? 10 : 0;
	
	printf("The points are %d\n", pt);
	
	return 0;

};