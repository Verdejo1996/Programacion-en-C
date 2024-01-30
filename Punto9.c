#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//9. Ingresar el tiempo trabajado por un operario y considerando que el valor de la hora
//es de 10 pesos, calcular su sueldo e imprimirlo.

int main(int argc, char *argv[]) {
	
	int tiempo, sueldo, vh = 10;
	
	printf("Ingrese el tiempo trabajado: ");
	scanf("%d",&tiempo);
	
	sueldo = tiempo * vh;
	
	printf("El sueldo es: %d\n",sueldo);
	
	return 0;
}
