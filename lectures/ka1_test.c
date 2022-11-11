#include <stdio.h>

int staticVar1 = 0; // a static variable
int staticVar2 = 1;

int main() {
	staticVar1 += 1;
	int heapVar = 2;
	// sleep causes the program to wait for x seconds
 	sleep(10); 
 	printf ("Address: %x; Value: %d\n", &staticVar1, staticVar1);
 	printf ("Address: %x; Value: %d\n", &staticVar2, staticVar2);
 	printf ("Address: %x; Value: %d\n", &heapVar, heapVar);
	return 0;
 }

