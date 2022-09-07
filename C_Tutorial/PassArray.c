#include <stdio.h>

void printArray(int arr[], int size) { //if passing array or pointer, the original value can be changed in the function
    for (int i = 0; i < size; i++)
        {   
            arr[i]++; 
            printf("%d ", arr[i]);
        }
}

int main() {
    int slicesEachMeal[] = {4, 5, 4, 6, 3, 2};
    printArray(slicesEachMeal, 6); //array decays to a pointer when passed in, thats why we need size, pointer has no size
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", slicesEachMeal[i]);
    }
    

    return 0;
}