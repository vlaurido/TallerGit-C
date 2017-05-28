#include <stdio.h>
#define TAMANO 1024

int main (void) {
	int clave;
	char mensaje[TAMANO];
	
	printf ("Cifrado Ciclico\n");

	printf("Ingrese mensaje a cifrar:");
	scanf("%s", mensaje);
	
	printf("Ingrese la clave numerica:");
	scanf("%d", &clave);
	return 0;
}
