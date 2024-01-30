#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float radio=0, area=0;
	const PI=3.14;
	
	printf("Ingrese el radio de una circunferencia: \n");
	scanf("%f",&radio);
	
	area = PI * pow(radio,2);
	
	printf("El area de la circunferencia es: %1.2f\n", area);
	
	return 0;
}
