#include <stdio.h>

int main(void) {
	
	int x,dis;
	
	printf("Enter the amount: ");
	scanf("%d",&x);
	
	if (x > 5000) printf("The discount is 20%\n");
	else if (x > 1000) printf("The discount is 10% \n");
	else printf("The discount is 5% \n");

	return 0;

};