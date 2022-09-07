#include <stdio.h>

int doubleValue(int slices) {
    return slices*2; //endrer ikke opprinnelige slices, kun den lokale variabelen i funksjonsstacken
}

void halfValue(int *slices) { //bruk pointers for å endre verdien til en variabel
    *slices = *slices/2; //endrer verdien i adressen p som passes inn i linje 40, endrer da verdien til *p og slices
}

int main() 
{
    int slices = 8;
    int *p = &slices;

    printf("Slices of pizza: %d\n", slices);
    printf("Slices (through pointer) %d\n", *p); //p is the adress, *p gets the value at p

    printf("Ender verdien til variabelen\n");
    slices = 15;

    printf("Slices of pizza: %d\n", slices);
    printf("Slices (through pointer) %d\n", *p); 

    printf("Ender verdien i adressen til variabelen gjennom pointer\n");
    *p = 20;

    printf("Slices of pizza: %d\n", slices);
    printf("Slices (through pointer) %d\n", *p); 

    (*p)++;
    (*p)++;
    printf("inkrementerer verdien i adressen gjennom pointer\n");

    printf("Slices of pizza: %d\n", slices);
    printf("Slices (through pointer) %d\n", *p); 
    //*p++ => *(p++), presedence , bruk evt (*p)++
    printf("\nEnder verdien til variabelen:\n");


    printf("Slices of pizza: %d\n", doubleValue(slices)); //endrer ikke verdien i adresse p
    printf("Slices (through pointer) %d\n", *p); 

    halfValue(p); //endrer verdien i adresse p

    printf("Slices of pizza: %d\n", slices);
    printf("Slices (through pointer) %d\n", *p); 


    return 0;
}