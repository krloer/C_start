//doctors office menu

#include <stdio.h>

int main() {
    printf("Choose an option 1-4: \n");
    printf("1. Add a patient\n");
    printf("2. View a patient\n");
    printf("3. Search patient\n");
    printf("4. exit\n");

    int input;
    scanf("%d", &input);

    // switch (input)
    // {
    //     case 1:
    //         printf("Adding a patient\n");
    //         break;
    //     case 2:
    //         printf("Viewing a patient\n");
    //         break;
    //     case 3:
    //         printf("Searching patients\n");
    //         break;
    //     case 4:
    //         printf("exiting...\n");
    //         break;
    //     default:
    //         printf("Incorrect input\n");
    //         break;
    // }

    if(input == 1)
    {
        printf("Adding a patient\n");
    } else if (input == 2)
    {
        printf("Viewing a patient\n");
    } else if (input == 3)
    {
        printf("Searching patients\n");
    } else if (input == 4) 
    {
        printf("exiting...\n");
        char save;
        getchar();
        printf("Do you want to save? (Y/N)");
        scanf("%c", &save); //input stream without getchar: 4\nY, må fjerne \n

        if (save == 'Y' || save == 'y')
        {
            printf("Saving!\n");
        } else if (save == 'N' || save == 'n')
        {
           printf("Fine, whatever...\n");
        } else
        {
            printf("Incorrect input\n");
        }
    } else
    {
        printf("Incorrect input\n");
    }
    
    return 0;
}