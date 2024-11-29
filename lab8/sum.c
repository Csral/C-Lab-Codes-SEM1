#include <stdio.h>

#define len 2;
void sum(int[len][len]);

int main ()
{
	
	int i,j;
	
	int a[len][len], b[len][len];
	
	printf("Enter %d numbers of first matrix seperated by space ",len*len);
	
	
	for(i=0;i<len;i++) for (j = 0; j<len;j++) scanf("\n%d", &a[i][j]);
			
	for( i = 0;i<len;i++) {
		
		for (j=0;j<len;j++) printf("%d ",a[i][j]);
		
		printf("\b\n");
	}

	sum(a);

	return 0;

};

void sum(int a[len][len]) {
	
	int i,j;
	int c[2] = {0,0};
	int r[2] = {0,0};
	for(i = 0;i<len;i++) {
		for (j=0;j<len;j++) {
			r[i] += a[i][j];
			c[j] += a[i][j];
		}
	}

	printf("Column sums ----------------\n");

	for(i=0;i<len;i++)
		printf("sum of column %d is %d.\n",i+1,c[i]);

	printf("Row sums ------------------\n");

	for(i=0;i<len;i++)
		printf("sum of rows %d is %d.\n",i+1,r[i]);
}