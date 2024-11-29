#include <stdio.h>

int main(void) {

    int price[3];
    int collect = 0;
    int accept = 0;
    
    while (collect < 3) {
        accept = 0;
        printf("Enter the price of item no.%d> ", collect+1); scanf("%d", &accept);
        price[collect] = accept;
        collect++;
    };
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += price[i];
    };
    printf("Your total is %d\n", sum);
    return 0;

}