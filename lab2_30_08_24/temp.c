#include <stdio.h>

int main(void) {

    float c,f;

    printf("Enter the temp in celcuis> "); scanf("%f", &c);
    
    f = ((9/5)*c)+32;
    printf("%0.1f Celcius in farenheit is %0.1f\n", c,f);

    return 0;

}