#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//10. Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $500 por mes
//mas un plus del 10% del precio sobre cada vehiculo vendido y un valor constante de 50 pesos por cada
// uno de ellos, se ingresa el valor del vehiculo y cuantos vehiculos de ese tipo vendio
// calcular su sueldo e imprimirlo.

int main(int argc, char *argv[]) {
	
	int vVenta=50, sueldo = 500;
	
	int vehiculo, cantidadVehiculos;
	
	printf("Ingrese la cantidad de vehiculos vendidos: ");
	scanf("%d",&cantidadVehiculos);
	
	vVenta *= cantidadVehiculos;
	
	printf("El valor del vehiculo es: ");
	scanf("%d",&vehiculo);	
	
	sueldo += vVenta + (vehiculo * 10)/100;
	
	printf("El sueldo es: %d\n",sueldo);
	
	
	
	return 0;
}
