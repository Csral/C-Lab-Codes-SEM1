#include <stdio.h>

int main(void) {
	
	int a,b,c;
	
	printf("Enter three numbers separated with space: ");
	scanf("%d%d%d",&a, &b, &c);
	
	
	if (a > b) {
	
		if (a>c)
			printf("%d is the greatest\n",a);
		else
			printf("%d is the greatest\n",c);
	
	} else {
		
		if (b > c) printf("%d is the greatest\n",b);
		else printf("%d is the greatest\n",c);
	
	}

	return 1;

};