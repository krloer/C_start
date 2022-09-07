#include <stdio.h>

int main()
{
	int x = 2 + 3 * 4 / 3 - 2; //operator presedence (rekkefølge) -> 4
	int y = 5 % 2;
	printf("%i, %i\n", x, y);
	return 0;
}
