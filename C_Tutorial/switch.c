#include <stdio.h>

int main()
{
    int slices = 3;
    printf("How many pizza slices?: ");
    scanf("%i", &slices);

    switch (slices)
    {
        case 1:
            printf("You did great!");
            break;
        case 2:
            printf("You did good!");
            break;
        case 3:
            printf("You did okay!");
            break;
        case 4:
            printf("not great...");
            break;
        default:
            printf("You did a bad");
            break;
    }
    printf("\n");

    return 0;
}