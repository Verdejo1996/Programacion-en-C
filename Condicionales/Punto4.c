#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3; 
	float promedio;
	
	printf("Ingrese tres numeros: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	
	promedio = (n1+n2+n3)/3;
	
	if(n3>promedio)
	{
		printf("El numero mayor al promedio es: %d\n",n3);
	}
	else
	{
		if(n2>promedio)
		{
			printf("El numero mayor al promedio es: %d\n",n2);
		}
		else
		{
			if(n1>promedio)
			{
				printf("El numero mayor al promedio es: %d\n",n1);
			}
		}
	}
	
	return 0;
}
