#include <stdio.h>

/*
! Goal -> Compare ascii values
*/

int main(void) {
	
	char a;
	
	printf("Enter the character: ");
	scanf("%c", &a);
	
	if (a >= 'a' && a <= 'z')  printf("It is in lowercase\n");
	else if (a >= 'A' && a <= 'Z') printf("It is in uppercase\n");

	return 0;
}
