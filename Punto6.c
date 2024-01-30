#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//6. Ingresar los lados de un rectangulo y calcular su diagonal principal, superficie y perimetro
//imprima los resultados.

int main(int argc, char *argv[]) {
	
	int lado1, lado2, lado3, lado4, diagonal, perimetro, a;
	
	printf("El primer lado es: ");
	scanf("%d",&lado1);
	
	printf("El segundo lado es: ",lado2);
	scanf("%d",&lado2);
	
	printf("El tercer lado es: ");
	scanf("%d",&lado3);
	
	printf("El cuarto lado es: ",lado2);
	scanf("%d",&lado4);
	
	diagonal = sqrt((lado1*lado1)+(lado2*lado2));
	
	printf("La diagonal es: %d\n",diagonal);
	
	a = lado1*lado2;
	
	printf("El area es: %d\n",a);
	
	perimetro = lado1*2 + lado2*2;
	
	printf("El perimetro es: %d\n",perimetro);
	
	return 0;
}
