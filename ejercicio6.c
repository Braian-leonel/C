/*
 * Escribir un programa que imprima y calcule el promedio de una secuencia de numero
 * enteros, suponiendo que el ultimo valor leido mediante el scanf() es el centinela 9999
 *  el programa debera leer un valor cada vez que el scanf() sea ejecutado 
 * por ejemplo una secuencia tipica de entrada seria 
 * 10, 8, 11, 7, 9, 9999
 * el promedio debe calcularse de todos los valores que proceden a 9999
 * ademas el programa debe localizar el mas pequeño
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int num,prom, menor, contador = 0;
	
	for(printf("Ingrese un numero:\n"); num!=9999; prom = num/2){
		scanf("%5d", &num);
	
		if((num >= 0) && ((num < menor) || (contador == 1))) {
				menor = num;
				contador ++;
		}
		
	}
	
	printf("El promedio es : %d y el menor es %d", prom, menor);
	return 0;
}

