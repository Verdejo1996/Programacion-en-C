#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//5. Ingresar dos lados de un triangulo rectangulo y calcular, la hipotenusa, el perimetro,
//la superficie. imprima los resultados.

int main(int argc, char *argv[]) {
	
	int lado1, lado2, hip, perimetro, a;
	
	printf("El primer lado es: ");
	scanf("%d",&lado1);
	
	printf("El segundo lado es: ");
	scanf("%d",&lado2);
	
	hip = lado1*lado1 + lado2*lado2;
	
	printf("La hipotenusa es: %d\n",hip);
	
	perimetro = lado1 + lado2 + hip;
	
	printf("El perimetro es: %d\n",perimetro);
	
	a = (lado1*lado2)/2;
	
	printf("El area es: %d\n",a);
	
	return 0;
}
