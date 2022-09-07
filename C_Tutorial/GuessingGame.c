#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

//Generate a (pseudo) random number, seeded from the clock
//user guesses the random number

int main() {
    srand(time(NULL));
    int maxValue = 5;
    int randomNumber = rand() % maxValue + 1;

    printf("Guess a number 0 - %d: ", maxValue);
    int input;
    scanf("%d", &input);

    if (input == randomNumber)
    {
        printf("The number was %i, YOU WON!\n", randomNumber);
    } else
    {
        printf("The number was %i, try again...\n", randomNumber);
    };
    
    printf("Thank you for playing!\n");
    
    return 0;
}