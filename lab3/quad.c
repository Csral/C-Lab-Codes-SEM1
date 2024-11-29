#include <stdio.h>

int main(void) {
	
	int x,y;
	
	printf("Enter your x and y coordinates separated by space: ");
	scanf("%d%d", &x, &y);
	
	if ( x > 0 ) {
	
		if ( y > 0 )
			printf("1st Quadrant\n");
		else
			printf("4th Quadrant\n");
	
	} else {
	
		if ( y > 0 )
			printf("2nd Quadrant\n");
		else
			printf("3rd Quadrant\n");
	
	};

	return 0;

};