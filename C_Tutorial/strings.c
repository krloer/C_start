#include <stdio.h>
#include <string.h>

int main()
{
    printf("What is your favorite food? ");
    char favFood[50]; //nummer 50 er \0
    scanf("%49s", favFood); //limits input to 49
    printf("%s\n", favFood);

    int charCount = strlen(favFood);
    // while (favFood[charCount] != '\0')
    // {
    //     charCount++;
    // }

    printf("The character count is %d\n", charCount);

    return 0;
}