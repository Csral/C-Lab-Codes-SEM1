#include <stdio.h>

int main(void) {

    double peri,area,raidus;

    printf("Enter the radius of the circle> "); scanf("%lf", &raidus);
    
    printf("The area of given circle is %0.1lf\nThe perimeter of given circle is %0.1lf\n", 3.14*raidus*raidus,2*3.14*raidus);

    return 0;
}