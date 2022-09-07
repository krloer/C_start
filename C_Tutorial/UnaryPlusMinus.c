#include <stdio.h>

int main()
{
	int money = 25;
	int bill = 15;

	int total = money - -bill; //endrer uttrykket, ikke variabelen
	
	printf("Etter betaling: %i\n", total);

	return 0;
}
