/*
 campo de digito justificado derecha o izquierda
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	/*
	float a;
	a = 98.736;
	
	printf("%*.*f",7,2,a );
	* */
	
	char nombre[10] ;
	char *p;
	
	printf("Ingrese una cadena:");
	scanf("%s", nombre);
	
	printf("Introduzca una direccion");
	scanf("%p", &p);
	
	printf("En la palabra %s esta la posicion %p con la letra %c ", nombre, p, *p );
	
	
	return 0;
}

