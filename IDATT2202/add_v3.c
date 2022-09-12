#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int number1;
    int number2;
    int sum;

    if(argc != 3) {
        printf("Two numbers are required!\n");
        return 1;
    }

    number1 = atoi(argv[1]);
    number2 = atoi(argv[2]);

    if(number1 > 100 || number2 > 100)
	{
		printf("At least one number is too large!\n");
		return 1;
	}

	sum = number1 + number2;

	printf("Sum of %d and %d is %d\n", number1, number2, sum);
	return 0;
}