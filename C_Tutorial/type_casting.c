#include <stdio.h>

int main()
{
	printf("The number of egges for the day: ");
	int eggs;
	scanf("%i", &eggs);

	double dozen = (double) eggs / 12; //type casting double on eggs

	printf("You have %f dozen eggs.\n", dozen);

	return 0;
}
