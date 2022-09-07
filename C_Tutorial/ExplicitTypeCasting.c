#include <stdio.h>

int main()
{
	int slices = 17;
	int people = 2;
	double halfThePizza = (double) slices / people; //uten type casting - int/int = int
							//type casting operator endrer ikke variabelen (som unary)
	printf("%f\n", halfThePizza);
	
	double c = 25/2 * 2; //24
	double d = 25/ (double) 2 * 2.0; //25

	printf("c: %f\n", c); 
	printf("d: %f\n", d); 
	
	return 0;
}
