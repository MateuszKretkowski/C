#include <stdio.h>
#include <ctype.h>

int main() {
    char unit;
    float temp;

    printf("\nIs the temperature in (C) or (F)?:");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C') {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 /5) + 32;
        printf("\nThe temp in Fahrenheit is: %.1f", temp);
    }
    else if (unit == 'F') {
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }
    else {
        printf("\n %c is not an accurate mesourment of temperature");
    }


    return 0;
}