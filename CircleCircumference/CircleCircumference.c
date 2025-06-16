#include <stdio.h>
#include <math.h>
int main() {
    
    double radious;
    const double PI = 3.1415; 
    printf("Insert the radious of the cirlce: ");
    scanf("%lf", &radious);

    double circumference = 2 * PI * radious;
    printf("\nThe circumference of the circle is: %lf", circumference);

    return 0;
}