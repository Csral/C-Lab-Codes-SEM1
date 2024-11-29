#include <stdio.h>

int main(void) {

    float height;
    printf("Enter your height (in cm)> ");
    scanf("%f", &height);

    printf("Your height is %f\n", height);

    if (height > 160) printf("You are tall!");
    else if (height > 130 && height < 160) printf("You height is the average");
    else printf("You are short!");
    printf("\n");
    return 0;

}
