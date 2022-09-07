#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    printf("Input max number: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        char out[9] = {'\0'};
        if (i % 3 == 0)
        {
            char fizz[] = "fizz";
            strcat(out,fizz);
        }
        if (i % 5 == 0)
        {
            char buzz[] = "buzz";
            strcat(out,buzz);
        }
        printf("%d %s\n", i, out);
    }    
    
    return 0;
}