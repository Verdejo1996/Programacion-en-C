#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("Ingrese el primer valor: ");
	scanf("%d",&a);
	
	printf("Ingrese el segundo valor: ");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("Los numeros son iguales");
	}
	return 0;
}
