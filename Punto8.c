#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//8. Ingresar el valor de la hora y el tiempo trabajdo por un operario, calcular su sueldo e imprimirlo.

int main(int argc, char *argv[]) {
	
	int vh, tiempo, sueldo;
	
	printf("El valor hora es: ");
	scanf("%d",&vh);
	
	printf("El tiempo trabajado es: ");
	scanf("%d",&tiempo);
	
	sueldo = vh*tiempo;
	
	printf("El sueldo es: %d\n",sueldo);
	
	return 0;
}
