#include <stdio.h>
#include <math.h>
int main() {
    
    double radious;
    const double PI = 3.1415; 
    printf("Insert the radious of the cirlce: ");
    scanf("%lf", &radious);

    double circumference = 2 * PI * radious;
    double area = PI * pow(radious, 2);
    printf("\nThe circumference of the circle is: %lf", circumference);
    printf("\nThe area of the circle is: %lf", area);

    return 0;
}