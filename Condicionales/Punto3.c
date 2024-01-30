#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int lado1, lado2, lado3;
	
	printf("Ingrese los lados de un triangulo: ");
	scanf("%d",&lado1);
	scanf("%d",&lado2);
	scanf("%d",&lado3);
	
	if(lado1==lado2 && lado1==lado2 && lado2==lado3)
	{
		printf("El triangulo es equilatero");
	}
	else
	{
		if(lado1==lado2 || lado1==lado3 || lado2==lado3)
		{
			printf("El triangulo es isosceles");
		}
		else
		{
			printf("El triangulo es escaleno");
		}
	}
	
	return 0;
}
