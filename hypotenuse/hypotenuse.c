#include <stdio.h>
#include <math.h>

int main() {
    double first;
    double second;
    double angle;

    printf("Insert them numbers:");
    scanf("%lf", &first);
    scanf("%lf", &second);
    scanf("%lf", &angle);

    if (first == 0 || second == 0 || angle == 0) {
        return 1;
    }

    // wzor smieszny ktory 2 dni temu poznalem akurat xdd
    double hypotenuse = sqrt(pow(first, 2) + pow(second, 2) - 2 * first * second * cos(angle));
    printf("hypotenuse equals to: %lf", hypotenuse);
    return 0;
}