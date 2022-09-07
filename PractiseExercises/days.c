#include <stdio.h>

int main() 
{
	int input;
	printf("This program turns days into years, weeks and days");
	printf("How many days would you like to calculate for? ");
	scanf("%i", &input);

	int years, weeks, days;
	years = (input - (input % 365)) / 365;
	weeks = (input - years * 365) / 7;
	days = input - years * 365 - weeks * 7;
	printf("Input days: %i \nNumber of years: %i \nNumber of weeks: %i \nNumber of days: %i\n", input, years, weeks,days);

	return 0;
}
