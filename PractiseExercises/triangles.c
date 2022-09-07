#include <stdio.h>

void basicTriangle(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

void floydsTriangle(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j % 2 == 0)
            {
                printf("%d", 1);
            } else
            {
                printf("%d", 0);
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("How many lines in the first triangle? ");
    scanf("%d", &n);
    basicTriangle(n);
    
    printf("\n");

    printf("How many lines in floyds triangle? ");
    scanf("%d", &n);
    floydsTriangle(n);
    
    return 0;
}