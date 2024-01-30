#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int x;
void valorMinimo(int array[x]);
void valorMaximo(int array[x]);
float promedioVector(int array[], int x);
void ordenarVector(int array[x]);
void mostrarVector(int array[x]);
	
int main(int argc, char *argv[]) {
	
	
	printf("Ingrese la cantidad de valores que quiere almacenar: \n");
	scanf("%d",&x);
	
	int array[x];
	
	printf("Ingrese los valores: \n");
	
	int i;
	
	for(i=0; i<x; i++)
	{
		scanf("%d",&array[i]);
	}
	
	mostrarVector(array);

	printf("El vector ordenado queda asi: \n");
	
	ordenarVector(array);
	
	mostrarVector(array);
	
	valorMinimo(array);
	valorMaximo(array);
	printf("El promedio del vector es %.2f\n", promedioVector(array,x));
		
	return 0;
}

void valorMinimo(int array[x])
{
	int minimo=array[0];
	int posMinimo=0;
	int i;
	
	for(i=1; i<x; i++)
	{
		if(array[i] < minimo)
		{
			minimo = array[i];
			posMinimo = i;
		}
	}
	
	printf("El minimo fue: %d\n", minimo);
}

void valorMaximo(int array[x])
{
	int maximo=array[0];
	int posMaximo=0;
	int i;
	
	for(i=1; i<x; i++)
	{
		if(array[i] > maximo)
		{
			maximo = array[i];
			posMaximo=i;
		}
	}
	printf("El maximo fue: %d\n", maximo);
}

float promedioVector(int array[], int x)
{
	float suma = 0;
	float promedio;
	int i;
		
	for(i=0; i<x; i++)
	{
		suma = suma + array[i];
	}
	promedio = suma / x;
	return promedio;
}

void ordenarVector(int array[x])
{
	int i, y, j, aux=0;
	for(i=0;i<x-1;i++)
	{
		for(y=0;y<x-i-1;y++)
		{
			if(array[y]>array[y+1])
			{
				aux=array[y];
				array[y]=array[y+1];
				array[y+1]=aux;
			}
		}
	}
}

void mostrarVector(int array[x])
{
	int j;
	printf("v = [");
	for(j = 0; j<x; j++)
	{
		if(j>0)
		{
			printf(", ");
		}
		printf("%d", array[j]);
	}
	printf("]\n");
}
