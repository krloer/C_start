#include <stdio.h>

int main()
{
    int size = 5;
    int myGrades[size]; //kan definere størrelse i [], vokser ellers etter input
                        //alle elementer må være samme type
    myGrades[0] = 10;
    myGrades[1] = 13;
    myGrades[2] = 14;
    myGrades[3] = 125;
    myGrades[4] = 30;

    int newArray[size];
    int j = 0;
    for (int i = 4; i >= 0 ; i--) {
        newArray[j] = myGrades[i];
        j++;
    };
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", newArray[i]);
    }
    
    return 0;
}