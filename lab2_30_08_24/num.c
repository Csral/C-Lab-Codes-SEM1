#include <stdio.h>

int main(void) {

    int num;
    printf("Enter the number> ");
    scanf("%d", &num);

    if (num == 0) printf("The number is 0\n");
    else if (num < 0) printf("The given number is negative\n");
    else printf("The number is postivie\n");

    return 0;
}