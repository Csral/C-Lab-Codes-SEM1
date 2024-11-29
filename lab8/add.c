#include <stdio.h>

#define len 2;

void sum(int a[len][len], int b[len][len]);

int main() {
    int a[len][len], b[len][len];

    printf("Enter %d numbers for the first matrix separated by space: ", len * len);

    for (int i = 0; i < len; i++) for (int j = 0; j < len; j++) scanf("%d", &a[i][j]);

    printf("Enter %d numbers for the second matrix separated by space: ", len * len);

    for (int i = 0; i < len; i++) for (int j = 0; j < len; j++) scanf("%d", &b[i][j]);

    sum(a, b);

	return 0;

};

void sum(int a[len][len], int b[len][len]) {
    int c[len][len];

    for (int i = 0; i < len; i++) for (int j = 0; j < len; j++) c[i][j] = a[i][j] + b[i][j];
    
    printf("The result of the matrix addition is:\n");

    for (int i = 0; i < len; i++) {
        
		for (int j = 0; j < len; j++) printf("%d ", c[i][j]);
        
		printf("\n");
    };

};