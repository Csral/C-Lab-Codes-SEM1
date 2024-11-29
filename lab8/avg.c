#include <stdio.h>

int avg(int a[], int size);

int main(void) {

    int a[5];
    
	printf("Enter 5 numbers separated by space: ");
    
	for (int i = 0; i < 5; i++) scanf("%d", &a[i]);

    printf("The average of the numbers is: %d\n", avg(a, 5));
	
	return 0;

}

int avg(int a[], int size) {
    
	int sum = 0;
    for (int i = 0; i < size; i++) sum += a[i];
    
	return sum / size;

};