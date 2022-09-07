#include <stdio.h>
#include <stdbool.h> //uten denne  - _Bool som type

int main()
{
	bool calebIsCool = false; //uten stdbool.h - alt annet enn 0 lagres som 1

	printf("Is Caleb Cool? (1 is yes, 0 is no)? %i\n", calebIsCool);
	printf("%i\n", calebIsCool + 10);

	return 0;
}
