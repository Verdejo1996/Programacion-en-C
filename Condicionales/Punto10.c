#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char empleado[10];
	int horasT, categoria, sueldo;
	
	printf("Ingresar empleado: \n");
	scanf("%s",empleado);
	
	printf("Ingresar las horas trabajadas y su categoria: \n");
	scanf("%i",&horasT);
	scanf("%i",&categoria);
	
	switch(categoria)
	{
		case 1: sueldo = horasT*50;
		printf("El sueldo es: %i\n", sueldo);
		break;
		
		case 2: sueldo = horasT*70;
		printf("El sueldo es: %i\n", sueldo);
		break;
		
		case 3: sueldo = horasT*80;
		printf("El sueldo es: %i\n", sueldo);
		break;
		
		default: printf("Ingrese categoria valida");
	}
	
	return 0;
}
