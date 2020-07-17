/*
 * Realizar un programa que calcule 
 * el area y el volumen de una esfera y cilindro utilizando esta formula 
 * Esfera:
 * A = 4*pi*r
 * Cilindro:
 * A = 2*pirh + 2 *pi*r al cubo
 * V = pi*r al cubo*h
 */


#include <stdio.h>
#define PI 3.14

int main(int argc, char **argv)
{
	float A = 0;
	int r= 0;
	float A_C = 0;
	int h = 0;
	int radio= 0;
	float V= 0;
	
	printf("Ingrese el radio de una esfera: \n");
	scanf("%d", &r);
	A = 4*PI*r;
	printf("El area de una esfera es: %g\n", A);

	printf("Ingrese el radio de un cilindro: \n");
	scanf("%d", &radio);
	printf("Ingrese la altura del cilindro: \n");
	scanf("%d", &h);
	A_C = 2*PI*radio*h + 2;
    V = PI*radio*h;
    printf("El area de un cilindro es: %g , y el volumen es de %g\n", A_C, V);
 
	
	return 0;
}

