#include <stdio.h>

int main() {
    
    double list[2][2] = {{1, 2}, {1, 2}};

    double rows = sizeof(list) / sizeof(list[0]);
    double cols = sizeof(list[0]) / sizeof(list[0][0]);

    printf("\n%lf", rows);
    printf("\n%lf", cols);

    return 0;
}