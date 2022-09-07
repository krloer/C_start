#include <stdio.h>

int main() {
    int br = 1;
    int counter = 2;
    int max;
    printf("Count to: ");
    scanf("%d", &max);

    int i;
    for(i = 1; i < max + 1; i++) {
        if (i - br == 0)
        {
            printf("%d\n", i);
            br += counter;
            counter++;
        } else
        {
            printf("%d ", i);
        }
    }

    printf("You printed up to the number %d\n", i-1);

    return 0;
}