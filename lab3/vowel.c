#include <stdio.h>

int main(void) {
	char a;
	int pt = 0;
	
	printf("Enter the character: ");
	scanf("%c", &a);
	
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') 
		pt += 5;
	else if (a >= '0' && a <= '9') 
		pt += 10;
	
	printf("The points are %d\n", pt);
	
	return 0;
};