#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//4. Ingresar los lados de un triangulo, calcular su perimetro e imprimirlo

int main(int argc, char *argv[]) {
	
	int lado1, lado2, lado3, perimetro;
	
	printf("El primer lado es: ");
	scanf("%d",&lado1);
	
	printf("El segundo lado es: ",lado2);
	scanf("%d",&lado2);
	
	printf("El tercer lado es: ",lado3);
	scanf("%d",&lado3);
	
	perimetro = lado1+lado2+lado3;
	
	printf("El perimetro es: %d\n",perimetro); // "%d\n" salto de linea
	
	
	return 0;
}
