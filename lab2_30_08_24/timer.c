#include <stdio.h>
#include <time.h>

int main(void) {

    long int seconds;

    int hours,minutes,rseconds,milliseconds;

    printf("Enter the time in seconds> ");
    scanf("%ld", &seconds);

    hours = seconds/(60*60);
    rseconds = seconds %(60*60);

    minutes = rseconds/60;
    rseconds = rseconds % 60;

    milliseconds = rseconds / 1000;
    rseconds = rseconds % 1000;

    printf("The provided time from seconds into HH-MM-SS is %d-%d-%d-%d\n", hours,minutes,rseconds,milliseconds);
    return 0;

};