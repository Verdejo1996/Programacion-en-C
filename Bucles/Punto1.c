#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n=0, i;
	int acumNumeros=0;
	int cantidad=0; 
	float promedio=0;

	printf("Ingrese la cantidad de numeros que desea sumar: \n");
	scanf("%d",&cantidad);
	
			
	for(i=1;i<=cantidad;i++)
	{
		printf("Ingrese el numero %d \n", i);
		scanf("%d",&n);
		acumNumeros += n;
	}
	
	promedio = (float)acumNumeros/(float)cantidad;
	
	printf("La suma es: %d \n",acumNumeros);
	printf("El promedio es: %.2f \n",promedio);
	
	return 0;
}
