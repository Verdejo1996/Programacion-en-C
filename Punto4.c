#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//7. ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do valor ingresado
//imprimir los resultados.

int main(int argc, char *argv[]) {
	
	int a, b, suma, producto, resta;
	
	printf("El primer numero es: ");
	scanf("%d",&a);
	
	printf("El segundo numero es: ");
	scanf("%d",&b);
	
	suma += a+b;
	producto = a*b;
	resta += a-b;
	
	printf("La suma es: %d\n",suma);
	printf("El producto es: %d\n",producto);
	printf("La resta es: %d\n",resta);
	
	return 0;
}
