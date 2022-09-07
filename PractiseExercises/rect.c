#include <stdio.h>

int main() 
{
	double h, w;
	printf("Insert height in cm: ");
	scanf("%lf", &h);
	printf("Insert width in cm: ");
	scanf("%lf", &w);

	double perimeter, area;
	perimeter = 2*h + 2*w;
	area = h*w;
	printf("Perimeter: %f centimeters \nArea: %f square centimeters\n", perimeter, area);

	return 0;
}
