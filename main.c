#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int edad;
	
	printf("Ingrese su edad: "); //imprime en pantalla
	
	scanf("%d",&edad); // %d,&variable escanea el ingreso de usuario
	
	print("La edad ingresada es:%d\n",edad); // "%d\n" salto de linea
	
	edad = edad + 1;
	
	print("Ahora es:%d\n",edad);
	
	edad++;
	
	print("Ahora:%d\n",edad);
	
	
	return 0;
}
