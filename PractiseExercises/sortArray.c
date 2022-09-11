#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortArray(int arr[], int size) {
    int newArray[size];
    newArray[0] = arr[0];
    for (int i = 1; i < size; i++)// from here
    {   
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < newArray[j])
            {
                printf("%d ", i);
                printf("n: %d ,", arr[i]);
                int moving = newArray[i-1];
                for (int k = 0; k < j; k++)
                {
                    newArray[k+1] = newArray[k];
                    newArray[k] = arr[i];
                }           
                newArray[i] = moving;     
            } else
            {
                newArray[i] = arr[i];
            } // to here doesnt work
        }
    }
    arr = newArray;
    printf("\n");
    printf("New array: ");
    printArray(newArray, size);
    printf("Sorted!\n");
}

int main() {
    int arr[] = {3, 6, 12, 8, 1};
    int size = 5;
    printArray(arr, size);
    
    sortArray(arr, size);

    printArray(arr, size);

    return 0;
}