#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

void outputFactorial(int input[4]) { //no return type, can still return
    for (int i = 0; i < 4; i++)
    {
        printf("The factorial of %d is %d\n", input[i], factorial(input[i]));
    }

}

int main() {
    int numbers[4] = {2, 5, 13, 8};

    outputFactorial(numbers);
    
    return 0;
}