#include <stdio.h>
#include <unistd.h>

int staticVar1 = 0; // a static variable
int staticVar2 = 2;

int main() {
	staticVar1 += 1;
	int localVar = 10; //heap
	// sleep causes the program to wait for x seconds
 	sleep(5); 
 	printf ("Address: %x; Value: %d\n", &staticVar1, staticVar1);
 	printf ("Address: %x; Value: %d\n", &staticVar2, staticVar2);
 	printf ("Address: %x; Value: %d\n", &localVar, localVar);
	return 0;
 }
