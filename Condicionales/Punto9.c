#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char empleado[10];
	
	int sueldo, categoria, antiguedad;
	
	printf("Ingresar empleado: \n");
	scanf("%s",&empleado);
	
	printf("Ingresar sueldo, categoria y antiguedad: \n");
	scanf("%i",&sueldo);
	scanf("%i",&categoria);
	scanf("%i",&antiguedad);
	
	if(categoria==1)
	{
		sueldo = sueldo + (antiguedad*50);
		
		printf("El sueldo de %s es: %i, es de categoria: %i y tiene una antiguedad de %i anios\n",empleado,sueldo,categoria,antiguedad);
	}
	else
	{
		printf("El sueldo de %s es: %i, es de categoria: %i y tiene una antiguedad de %i anios\n",empleado,sueldo,categoria,antiguedad);
	}
	
	return 0;
}
