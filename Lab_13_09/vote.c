#include <stdio.h>

int main(void) {
    int age;
    printf("Enter your age> ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are elgible for voting!\n");
    } else {
        printf("You are not elgible for voting!\n");
    }

    return 0;
};