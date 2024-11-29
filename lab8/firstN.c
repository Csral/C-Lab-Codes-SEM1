#include <stdio.h>

int sum(int);

int main(void) {
    int a;
    
	printf("Enter the number: ");
	scanf("%d", &a);
    
	printf("The sum is %d\n", sum(a));

	return 0;
}

int sum(int a) {
    if (a < 2)
        return 1;
    return a + sum(a - 1);
};