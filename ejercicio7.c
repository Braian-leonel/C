/*
 * realizar un programa que ingrese desde teclado un numero positivo n y calcule la suma
 * de los impares desde 1 hasta n, por ejemplo calcular la suma de los numero impares 
 * 1+3+5+...+(2*n-1)
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int n, sum= 0;
	
	for(printf("Ingrese numeros impares:\n"); n!= 0; sum+=n)
		scanf("%5d", &n);
	
	printf("La suma de todos los numeros impares es de: %d", sum);
	
	return 0;
}

