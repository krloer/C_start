#include <stdio.h>
#include <stdbool.h>

int main() {
    bool pizzaIsHealthy;
    int temp;
    
    printf("Do you believe in the power of pizza? 1 is yes, 0 is no. ");
    scanf("%d", &temp);
    pizzaIsHealthy = temp;

    if(pizzaIsHealthy) {
        printf("Welcome to my pizza APP\n");
    }

    return 0;
}