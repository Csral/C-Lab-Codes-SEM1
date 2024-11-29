#include <stdio.h>

int max(int[]);

int main (void) {

	int a[5];
	printf("Enter 5 numbers seperated by space ");

	for(int i=0;i<5;i++) scanf("%d", &a[i]);
	
	printf("The maximum of the numbers is %d.\n", max(a));

	return 0;

};

int max(int a[]) {
	
	int m = 0;

	for(int i = 0;i<5;i++) if (m < a[i]) m = a[i];

	return m;

};