#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, x, acumCeros=0, acumPos=0, acumNeg=0, totalPos=0, totalNeg=0;
	float promedioNeg=0, promedioPos=0;
	
	printf("Ingrese una opcion: \n");
	printf("1- Ingresar numeros. \n");
	printf("0- Salir. \n");
	scanf("%d",&x);
	
	while(x!=0)
	{	
		if(x==1)
		{
			printf("Ingrese un numero: \n");
			scanf("\t%d",&n);
			
			if(n>0)
			{
				acumPos += n;
				totalPos++;
			}
			else
			{
				if(n<0)
				{
					acumNeg += n;
					totalNeg++;
				}
				else
				{
					acumCeros++;
				}
			}
		}
		
		printf("Quiere continuar? \n-1 para continuar \n-0 para terminar: \n");
		scanf("\t%d",&x);
	}
	
	promedioNeg = (float)acumNeg/(float)totalNeg;
	promedioPos = (float)acumPos/(float)totalPos;
		
	printf("La cantidad de ceros es: %d \n",acumCeros);
	printf("El promedio de negativos es: %1.2f \n",promedioNeg);
	printf("El promedio de positivos: %1.2f \n",promedioPos);
		
	return 0;
}
