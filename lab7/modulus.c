#include <stdio.h>

int main(void) {

    int num;
    printf("Enter the number> ");
    scanf("%d", &num);
    
    if (num < 0) {
        num += -2*num; // ! Add negative of the negative number to itself twice to make it positive!
    };

    printf("The absolute value of the given number is %d\n", num);

    return 0;
};