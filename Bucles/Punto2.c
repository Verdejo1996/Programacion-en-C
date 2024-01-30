#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	int n1=0;
	int n2=1;
	int nSuma=0;
	int i=1;
	
	printf("Ingrese un numero entero positivo: \n");
	scanf("%d",&numero);
	
	printf("La serie de Fibonacci es: \n");
	
	while(i<numero)
	{
		printf("%d \n",nSuma);
		
		nSuma=n1+n2;
		n1=n2;
		n2=nSuma;
		i=nSuma;
		
	}
	
	return 0;
}
