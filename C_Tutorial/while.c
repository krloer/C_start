#include <stdio.h>

int main() {
    int i = 0;
    while (i < 11)
    {      
        int j = i;
        while (j >= 0)
        {
            printf("%d ", j);
            j--;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}