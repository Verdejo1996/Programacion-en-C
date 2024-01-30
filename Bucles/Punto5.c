#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int autos=0;
	float tiempo=0;
	float tiempoQueGano=0;
	float tiempoQueSalioUltimo=0;
	int x;
	
	printf("Indique la cantidad de autos que corren la carrera: \n");
	scanf("%d",&autos);
	
	if(autos<=0)
	{
		printf("Ingrese un numero valido: \n");
		scanf("%d",&autos);
	}
	
	for(x=1;x<=autos;x++)
	{
		printf("Indique en minutos y segundos el tiempo del auto %d \n",x);
		scanf("%f",&tiempo);
		
		if(x==1)
		{
			tiempoQueGano=tiempo;
			tiempoQueSalioUltimo=tiempo;
		}
		else
		{
			if(tiempo>tiempoQueSalioUltimo)
			{
				tiempoQueSalioUltimo=tiempo;
			}
			if(tiempo<tiempoQueGano)
			{
				tiempoQueGano=tiempo;
			}
		}
	}
	
	printf("El tiempo del auto ganador es %.2f \n", tiempoQueGano);
	printf("El tiempo del auto que salio ultimo es %.2f \n", tiempoQueSalioUltimo);
	
	
	return 0;
}
