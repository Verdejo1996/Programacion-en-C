#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int edad1, edad2;
	float altura1, altura2;
	
	printf("Ingrese la edad de dos personas: \n");
	scanf("%d",&edad1);
	scanf("%d",&edad2);
		
	printf("Ingrese la altura de esas dos personas: \n");
	scanf("%f",&altura1);
	scanf("%f",&altura2);
	
	if (edad1>edad2) 
	{
		printf("El de mayor de edad mide %1.2f\n", altura1);
	} 
	else 
	{
		printf("El de mayor edad mide %1.2f\n", altura2);
	}
	
	return 0;
}
