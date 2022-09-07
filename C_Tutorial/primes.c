#include <stdio.h>
#include <stdbool.h>
#include <math.h> // -lm i kompilering

bool isPrime(int Input) {
    bool prime = true;
    for (int j = 2; j < sqrt(Input); j++)
    {   
        if (Input % j == 0) return false;
    }
}

int main() {
    int max;
    printf("How many numbers would you like to check? ");
    scanf("%d", &max);
    int ammount = 0;

    for (int i = 2; i <= max; i++)
    {
        bool prime = isPrime(i);
        if (prime && i != 4) {
        printf("%d ", i);
        ammount++;
        }
    }

    printf("\nThere are a total of %d prime number between 0 and %d\n", ammount, max);

    return 0;
}