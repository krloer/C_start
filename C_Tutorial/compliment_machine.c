#include <stdio.h>

/*
Lang
kommentar
*/
int main()
{
	char name[31]; //trenger en ekstra plass for null terminator
	printf("Whats your name?");
	scanf("%s", name); //trenger ikke address-of operator med arrays

	printf("Hello %s!\nYou look nice today!\n", name);
	return 0;
}
