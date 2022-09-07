#include <stdio.h>

int main() {
    for (int i = 0; i < 60; i++)
    {
        printf("%i ", i);
        if (i == 6)
        {
            printf("\n");
            break; //ut av loop
        }
    }
}