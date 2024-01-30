#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, dado;
	
	printf("Elige un numero del dado entre 1 y 6: \n");
	scanf("%d",&n);
	
		
	while(n!=0)
	{	
		srand(time(NULL));			
		dado = rand() % 6+1;
		
		printf("Salio el numero: %d \n",dado);
				
		if(dado!=n)
		{
			printf("No acerto el intento \n");
		}
		else
		{
			printf("Acerto el intento \n");
		}
		
		printf("Intente de nuevo o presione 0 para terminar: \n");
		scanf("%d",&n);		
	}
	
	
	return 0;
}
