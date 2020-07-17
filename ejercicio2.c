/*
 realizar un programa que pueda convertir temperatura grados fahrenheit desde 0 hasta 122  a grados celcius
 * de punto flotante de 3 digitos de precision, utilizando la formula
 * C = (5.0 /9) * (f-32)
 */


#include <stdio.h>

int main()
{ 
	float F, C, convertir, C_N;
	
	printf("Ingrese el valor en grado a convertir:\n");
	scanf("%f", &convertir);
	printf("\n\n\t\tG° Fahrenheit Celcius Celcius negativo");
	for(F=0; F<=122; ++F){
		C = (5.0/9) *(convertir-32);
		if(C < 0)
		C_N = C;
		
	}
	printf("\n\n\t        %.2f,        %.2f,        %.2f ", convertir, C, C_N);
	
	return 0;
}

