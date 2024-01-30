#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, suma;
	
	printf("Ingrese el primer valor: ");
	scanf("%d",&a);
	
	printf("Ingrese el segundo valor: ");
	scanf("%d",&b);
	
	printf("Ingrese el tercero valor: ");
	scanf("%d",&c);

	suma = a+b+c;
	printf("La suma de los tres es: %d\n",suma);
	
	return 0;
}
