#include <stdio.h>

#define len 2;
void display(int[]);

int main (void) {

    int a[len];
    
	printf("Enter %d numbers for the array, separated by space: ", len);
    
    for (int i = 0; i < len; i++)
        scanf("%d", &a[i]);
    
    for (int i = 0; i < len; i++)
        printf("%d ", a[i]);

    display(a);

	return 0;

}

void display(int a[]) {
    
	int size = sizeof(a) / sizeof(a[0]);
    printf("\nSize of array: %d\n", size);

    int last = a[size - 1];
    if (size == 1)
    {
        printf("%d ", a[0]);
        return;
    }

    int b[size - 1];
    for (int i = 0; i < size - 1; i++)
        b[i] = a[i];
    
    display(b);
    printf("%d ", last);

};