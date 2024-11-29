#include <stdio.h>

int main(void) {

    int num1,num2,num3;
    printf("Enter the 3 numbers> ");
    scanf("%d%d%d", &num1,&num2,&num3);

    if (num1 > num2 && num1 > num3) {
        printf("Number 1 (%d) is maximum\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("Number 2 (%d) is maximum\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("Number 3 (%d) is maximum\n", num3);
    } else { // ! All are equal
        printf("All given numbers are equal!\n");
    }

    return 0;
};