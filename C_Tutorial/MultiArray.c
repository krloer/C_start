#include <stdio.h>

//refactoring - changing code structure, should have tests setup to not break other code

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
}

int main()
{
    int myGrades[] = {12, 23, 45}; //size not needed
    int someGrades[] = {64, 78, 89};

    int columns = 3;
    int rows = 2;
    int grades[rows][columns]; //size need, cant be initialized while using vars for size

    printf("%d\n", grades[1][2]);
    grades[1][2] = 5;
    printf("%d\n", grades[1][2]);

    for (int i = 0; i < 3; i++)
    {
        grades[0][i] = myGrades[i];
    }
     for (int i = 0; i < 3; i++)
    {
        grades[1][i] = someGrades[i];
    }

    for (int i = 0; i < rows; i++)
    {
        printArray(grades[i], columns);
        printf("\n");
    }

    return 0;
}