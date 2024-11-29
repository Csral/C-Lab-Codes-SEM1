#include <stdio.h>

int sum(int a, int b) {
    return a + b;
};

int mult(int a, int b) {
    return a * b;
};

int sub(int a, int b) {
    return a - b;
};

int div(int a, int b) {
    return a / b;
};

int rem(int a, int b) {
    return a % b;
};

int main() {

    int num1, num2, result;
    char operation, continueCalculation = 'y';

    while (continueCalculation == 'y') {
        printf("Enter two numbers separated by space: ");
        scanf("%d%d", &num1, &num2);

        printf("Enter the operation (+, -, *, /, %%): ");
        scanf(" %c", &operation); // Space before %c to capture the newline from previous input

        if (operation == '+')
            printf("The result is %d\n", sum(num1, num2));
        else if (operation == '-')
            printf("The result is %d\n", sub(num1, num2));
        else if (operation == '*')
            printf("The result is %d\n", mult(num1, num2));
        else if (operation == '/')
            if (num2 == 0)
                printf("Error: Cannot divide by zero\n");
            else
                printf("The result is %d\n", div(num1, num2));
        else if (operation == '%')
            if (num2 == 0)
                printf("Error: Modulo by zero is not allowed\n");
            else
                printf("The result is %d\n", rem(num1, num2));
        else
            printf("Invalid operation\n");

        printf("Do you want to perform another calculation (y/n)? ");
        scanf(" %c", &continueCalculation);  // Again space before %c to capture leftover newline
    }

    return 0;

};