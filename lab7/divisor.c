#include <stdio.h>

int main(void) {
    int n, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("The divisors of %d are: ", n);
    
    while (i <= n) {
        
        if (n % i == 0)
            printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;

};