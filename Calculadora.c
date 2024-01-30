#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2;
	
	int suma=0, resta=0, mult=0, operacion;
	float div=0;
	
	printf("Ingrese dos numeros: \n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	
	printf("Ingrese el numero de operacion que desea realizar: \n");
	printf("1- suma / 2- resta / 3- multiplicacion / 4- division: \n");
	scanf("%d",&operacion);
	
	switch (operacion)
	{
		case 1:
			suma = n1+n2;
			printf("La suma es: %d\n",suma);
			break;		
		case 2:
			resta = n1-n2;
			printf("La resta es: %d\n",resta);
			break;
		case 3:
			mult = n1*n2;
			printf("La multiplicacion es: %d\n",mult);
			break;
		case 4:
			div = n1/n2;
			printf("La division es: %2.2f\n",div);
			break;
		default:
			printf("Ingrese operacion valida");
			break;				
	}
	
	
	return 0;
}
