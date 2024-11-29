#include <stdio.h>

int main(void) {

    int n   ;
    int count = 1;

    printf("Yo blud, giv' me tha numba of rows to shew> "); scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < count; j++) {
            printf("*");
        }

        printf("\n");

        count += 2;

    };

    printf("\n");

    return 0;
}