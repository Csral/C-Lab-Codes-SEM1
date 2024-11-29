#include <stdio.h>

int main(void) {

    int n;
    printf("Yo blud, giv' me tha numba > "); scanf("%d", &n);
    
    for (int i = 2; i < n; i++) {

        if (n % i == 0) {
            printf("The number is not a prime number\n");
            return 1;
        };

    };

    printf("The given number is a prime number\n");

    return 0;
};