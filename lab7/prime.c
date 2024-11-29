#include <stdio.h>

void check_prime(int);

int main(void) {

    int num;
    
	printf("Enter the number: ");
    scanf("%d", &num);
    
	check_prime(num);

	return 0;

};

void check_prime(int num) {
    if (num <= 1) {
        printf("The number is not prime\n");
        return;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("The number is not prime\n");
            return;
        }
    }

    printf("The number is prime\n");
};