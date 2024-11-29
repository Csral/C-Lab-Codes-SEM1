#include <stdio.h>

int bin(int);

int main(void) {
    
	int num;
    
	printf("Enter the number: ");
    scanf("%d", &num);
    
	printf("The binary of the number is ");
    
	bin(num);
    
	printf("\n");

	return 99;

};

int bin(int num) {
    
	if (num == 0)
        return 0;
    else {
        int res = bin(num / 2);
        printf("%d", num % 2);
        return res;
    }

};