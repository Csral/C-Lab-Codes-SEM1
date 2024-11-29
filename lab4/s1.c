#include <stdio.h>

int fact(int n, int mem[]) {

	if (n == 1) return 1;
	if (mem[n - 2] == 0) fact(n - 1, mem);
	int res = n * mem[n - 2];
	mem[n - 1] = res;
	return res;

};

int main(void) {

	int n;
	float sum = 0.0f;
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	int mem[n];
	mem[0] = 1;
	for (int i = 1; i < n; i++) mem[i] = 0;
	
	for (int i = 1; i <= n; i++) 
		sum += i / fact(i, mem);
	
	printf("The sum is: %.6f\n", sum);
	
	return 0;

};