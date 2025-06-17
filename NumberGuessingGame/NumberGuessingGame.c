#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int min = 1;
    int max = 5;    
    int randomNumber = (rand() % max) + min;
    int number;
    int guesses;
    do {
        guesses++;
        printf("Guess a number: ");
        scanf("%d", &number);
    } while (number != randomNumber);

    printf("You have correctly guessed a number!");
    printf("\nYou have made %d guesses", guesses);

    return 0;
}