#include <stdio.h>
// https://en.cppreference.com/w/c/language/operator_precedence

int main()
{
	int x, y;
	x = y = 5; //= leses høyre-til-venstre, først y=5 så x=y

	int z = 20;
	y = 2;
	x = -y + z; //unary - først, deretter addisjon, deretter =
		//altså x = ((-y) + z): x = (-2) + 20 = 18
	printf("%i\n", x);
	return 0;
}
