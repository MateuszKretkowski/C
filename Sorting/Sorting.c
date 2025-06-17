#include <stdio.h>

int main() {

    int array[] = {5, 4, 2, 1, 6, 7, 8};
    int len = sizeof(array) / sizeof(array[0]);

    for (int i=0; i<len-1; i++) {
        for (int j=0; j<len-1; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int p=0; p<len; p++) {
        printf("\n%d", array[p]);
    }

    return 0;
}