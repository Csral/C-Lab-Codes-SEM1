#include <stdio.h>

int main(void) {

    float time,distance;

    printf("Please enter the distance> ");
    scanf("%f", &distance);

    printf("Please enter the time travelled> ");
    scanf("%f", &time);

    printf("Speed based on given parameters is %0.1f\n", (distance/time));
    return 0;
};