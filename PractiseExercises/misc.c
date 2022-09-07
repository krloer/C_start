#include <stdio.h>

void equal(int a, int b) {
    if (a == b)
    {
        printf("%d and %d are equal!\n", a, b);
    } else
    {
        printf("%d and %d are not equal...\n", a, b);
    }
}

void odd(int a) {
    if (a % 2 == 0)
    {
        printf("%d is even.\n", a);
    } else
    {
        printf("%d is odd.\n", a);
    }  
}

void leapYear(int yr) {
    if (yr % 400 == 0 || (yr % 4 == 0 && yr % 100 != 0))
    {
        printf("%d is a leap year!\n", yr);
    } else
    {
        printf("%d is not a leap year...\n", yr);
    }
}

void checkHeight(int h) {
    if (h<140)
    {
        printf("This person is dwarf\n");
    } else if (h < 160)
    {
        printf("This person is small\n");
    } else if (h > 182)
    {
        printf("This person is tall\n");
    } else
    {
        printf("This person is of normal height\n");
    }
}   

int main() {
    int num1, num2;
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    equal(num1, num2);
    printf("\n");

    odd(num1);
    odd(num2);

    int year;
    printf("\nEnter year: ");
    scanf("%d", &year);
    leapYear(year);
    
    int height;
    printf("\nEnter heigh in centimeters: ");
    scanf("%d", &height);
    checkHeight(height);

    return 0;
}