#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, suma1, suma2;
	
	printf("Ingrese cuatro numeros: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	
	suma1 = n1+n2;
	suma2 = n3+n4;
	
	if(suma1>suma2)
	{
		printf("La primer suma es mayor.");
	}
	else
	{
		printf("La segunda suma es mayor.");
	}
	
	return 0;
}
