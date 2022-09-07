#include <stdio.h>
#include <math.h> //krever -lm (link math lib) i kompilering

int main()
{
	double a, b;
	printf("Insert bottom length:\n");
	scanf("%lf", &a);
	printf("Insert side length: \n");
	scanf("%lf", &b);

	double c = sqrt(a*a + b*b);
	printf("The hypothenuse of the right triangle with sides %f and %f is %f\n", a, b, c);

	return 0;
}
