#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortArray(int arr[], int size) {
    int moving;
    for (int i = 0; i < size; ++i)// from here
    {   
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[i] > arr[j])
            {  
                moving = arr[i];
                arr[i] = arr[j];
                arr[j] = moving; 
            } 
        }
    }
}

int main() {
    int arr[] = {3, 6, 12, 8, 1};
    int size = 5;
    printArray(arr, size);
    
    sortArray(arr, size);

    printArray(arr, size);

    return 0;
}