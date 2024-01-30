#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("El numero es negativo.");
	}
	else
	{
		if(n>0)
		{				
			printf("El numero es positivo.");
		}
		else
		{
			printf("El numero es cero.");	
		}
	}	
	return 0;
}
