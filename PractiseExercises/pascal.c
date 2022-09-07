#include <stdio.h>

int fact(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int value(int k, int line) {
    int a  = fact(line) / ( fact(line-k) * fact(k) );
}

int main() {
    int lines;
    printf("How many lines do you want? ");
    scanf("%d", &lines);

    for (int i = 0; i < lines; i++)
    {
        int spaces = lines - 1 - i;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            int a = value(k, i);
            printf("%d ", a);
        }
        printf("%d \n", 1);
    }
    
    return 0;
}