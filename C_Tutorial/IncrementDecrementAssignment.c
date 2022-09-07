#include <stdio.h>

int main()
{
	int pizzas = 70;
	pizzas++;
	pizzas += 30; // fungerer også med -= /= *= og %=
	--pizzas; //Begge funker, kun rekkefølge endres, eks test = ++pizzas = 124
	
	int output = pizzas++;
	printf("output: %i\n", output);
	printf("Pizzas: %i\n", pizzas); 
	return 0;
}
