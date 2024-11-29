#include <stdio.h>

int gcd(int a, int b)
{
    int i = 1;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
};

int main(void) {
    
    int a, b, gcdv, lcmv;
    
    printf("Enter two numbers to find GCD and LCM: ");
    scanf("%d %d", &a, &b);
    
    gcdv = gcd(a, b);
    lcmv = (a * b) / gcdv;
    
    printf("GCD of %d and %d: %d\n", a, b, gcdv);
    
    printf("LCM of %d and %d: %d\n", a, b, lcmv);

    return 0;
};