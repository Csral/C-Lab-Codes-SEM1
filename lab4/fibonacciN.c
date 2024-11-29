#include <stdio.h>

int main(void) {

	int fir = 0, sec = 1, r, third;
	
	printf("Enter the limit: ");
	scanf("%d", &r);
	
	if (r <= 0) return 0;
	else if (r == 1) { printf("0\n"); return 0; }
	else if (r == 2) { printf("0,1\n"); return 0; }
	
	printf("0,1");
	
	while (sec < r) {
		third = fir + sec;
		fir = sec;
		sec = third;
		printf(",%d", sec);
	}
	
	return 0;

};