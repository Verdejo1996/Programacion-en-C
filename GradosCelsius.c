#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float gradosC=0, gradosF=0;
	
	printf("Ingrese los grados Celsius: \n");
	scanf("%f",&gradosC);
	
	gradosF = (gradosC * 9/5) + 32;
	
	printf("Los grados Celsius expresados en Fahrenheit son: %1.1f\n", gradosF);
	
	return 0;
}
