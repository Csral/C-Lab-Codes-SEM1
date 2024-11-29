#include <stdio.h>
#include <math.h>

int main() {
    
	int num, first_digit, last_digit, num_digits = 0, temp;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    last_digit = num % 10;
    temp = num;

    while ( (temp/10) != 0) num_digits++;
    
    first_digit = num / pow(10, num_digits - 1);
    
    int middle_part = num % (int)pow(10, num_digits - 1);
    middle_part /= 10;
    
    int swapped_num = last_digit * pow(10, num_digits - 1) + middle_part * 10 + first_digit;
    
    printf("Swapped number: %d\n", swapped_num);
    
    return 0;

};