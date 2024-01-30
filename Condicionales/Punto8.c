#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dia, mes, anio;
	
	printf("Ingrese el dia, el mes y el anio: ");
	scanf("%d",&dia);
	scanf("%d",&mes);
	scanf("%d",&anio);
	
	switch (mes)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		if(dia>0 && dia<=31)
		{
			printf("La fecha es: %i/%i/%i\n",dia,mes,anio);
		}
		else
		{
			printf("La fecha es invalida");
		}
		break;
	case 4: case 6: case 9: case 11:
		if(dia>0 && dia<=30)
		{
			printf("La fecha es: %i/%i/%i\n",dia,mes,anio);
		}
		else
		{
			printf("La fecha es invalida");
		}
		break;
	case 2:
		if(dia==29)
		{
			if(anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
			{
				printf("La fecha es: %i/%i/%i\n",dia,mes,anio);
			}
			else
			{
				printf("La fecha es invalida");
			}
		}
		else
		{
			if(dia>0 && dia<=28)
			{
				printf("La fecha es: %i/%i/%i\n",dia,mes,anio);
			}
			else
			{
				printf("La fecha es invalida");
			}
		}
		break;
	default:
		printf("La fecha es invalida");
		break;	
	}
	
	return 0;
}
