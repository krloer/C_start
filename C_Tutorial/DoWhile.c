#include <stdio.h>
#include <stdbool.h>

int main() {
    int input;
    bool good = false;
    do
    {
        printf("Please enter a number 0 - 9 ");
        scanf("%d", &input);
        if (input < 0 || input > 9)
        {
            printf("Wrong input!\n");
        } else good = true;
    } while (!good);

    return 0;
}