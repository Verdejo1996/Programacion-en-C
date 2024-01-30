#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valorH, tiempo, sueldo;
	
	printf("Ingrese el valor de la hora: ");
	scanf("%d",&valorH);
	
	printf("Ingrese el tiempo trabajado: ");
	scanf("%d",&tiempo);
	
	sueldo = valorH*tiempo;
	
	if(tiempo>50)
	{
		sueldo = sueldo + 100;
		
		if(tiempo>150)
		{
			sueldo = sueldo + 100;
			
			printf("El sueldo es: %i\n", sueldo);
		}
		else
		{
			printf("El sueldo es: %i\n", sueldo);
		}
	}
	else
	{
		printf("El sueldo es: %i\n", sueldo);
	}
	
	return 0;
}
