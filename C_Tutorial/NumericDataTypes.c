#include <stdio.h>

/*
Format characters:
%f - decimal
%e - standardform
%g - computer decides (bruker standardform hvis eksponent til standardform er mindre enn -4 eller større enn 5
*/

int main()
{
	printf("How many dogs?");
	double dogs;
	scanf("%lf", &dogs); //%lf for double

	printf("%f\n%e\n%g\n", dogs ,dogs, dogs);	

	/* double, bruker dobbelt så mye plass som floats
	float brukes kun når lite plass. %f som format string for begge 
	floats lagres i standardform med 2 som grunntall*/

	printf("%i %f %f\n", 1, 11111.1111, 11111.1111F); //kun double blir korrekt for stort tall

	return 0;
}
