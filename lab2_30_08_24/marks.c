#include <stdio.h>

int main(void) {

    int subs;
    int collect = 0;
    printf("Enter number of subjects> "); scanf("%d", &subs);
    float marks[subs];
    float accept;
    while (collect < subs) {
        accept = 0.0;
        printf("Enter the mark for subject no %d> ",collect+1); scanf("%f", &accept);
        marks[collect] = accept;
        collect++;
    };

    float sum = 0.0;

    for (int i = 0; i < subs; i++) {
        sum += marks[i];
    };

    printf("Your total marks is %f\n", sum);

    return 0;

}