#include <stdio.h>
//' ' rundt characters

int main()
{
	char ASCII;
	printf("Favorite ASCII character?\n");
	scanf("%c", &ASCII);

	printf("%i\n", ASCII); //%i gir ASCII verdien til char
	
	int integer;
	printf("Please enter an integer between 0 - 127: \n");
	scanf("%i", &integer);
	printf("%c\n", integer); //gir ASCII char med verdien integer (65 -> A)

	char mathz = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz); //   \\ escapes	

	return 0;
}
