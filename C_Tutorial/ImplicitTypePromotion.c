#include <stdio.h>

int main()
{
	//implicit type conversation - promotion

	float x = 50.0;

	printf("%f\n", x); //printf takes a double, x is promoted to double in the function, var x is awlays float

	return 0;
}
