#include <stdio.h>

int main() {

    int num;
    printf("Enter the number> ");
    scanf("%d", &num);

    if (num % 2 == 0) // ! If remainder of num/2 is 0
        printf("The given number is even number\n");
    else
        printf("The given number is odd.\n");

}
