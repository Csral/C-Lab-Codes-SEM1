#include <stdio.h>

int main(void) {
	float w,h;

	printf("Enter your weight and height separated by space: ");
	scanf("%f%f",&w,&h);
	
	float bmi = w/(h*h);
	
	if ( bmi > 25 ) printf("Over Weight\n"); else if ( bmi >= 18.5f ) printf("Normal Weight\n"); else printf("Under Weight\n");

	return 0;

};