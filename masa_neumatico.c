/* 
 * Realizar un programa que calcule la masa del aire de una neumatico de automovil
 * utilizando esta formula:
 * PV = 0.37m(T + 460)
 */


#include <stdio.h>

int main()
{
	float P = 0;
	float V = 0;
	int m, T;
	
	printf("Ingrese la masa de aire:\n");
	scanf("%d", &m);
	printf("Ingrese la temperatura en grados Fahrenheit:\n");
	scanf("%d", &T);
	
	P = 0.37*m*(T + 460);
	V = 0.37*m*(T + 460);
	
	printf("El volumen de la masa de aire del neumatico %g, y la presion que libra por pulgada es de: %g", P,V);
	
	return 0;
}

