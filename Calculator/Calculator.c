#include <stdio.h>

int main() {
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+-*/): ");
    scanf("%c", &operator);

    printf("\nEnter number1: ");
    scanf("%lf", &num1);

    printf("\nEnter number2: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\nresult: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult: %lf", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("\nYou can't divide by 0");
                return 1;
            }
            result = num1 / num2;
            printf("\nresult: %lf", result);
            break;
        default:
            printf("\nInvalid operator");
    }
}