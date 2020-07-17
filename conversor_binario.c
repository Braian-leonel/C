/*
 *realize un programa que lea por teclado un numero binario e imprimir su equivalente 
 * decimal validar que el numero sea solo (0 y 1) osea binario, por ejemplo
 * el equivalente decimal del numero binario 1011 es:
 * 1*8 + 0*4 + 1*2 + 1*1 = 8 + 0 + 2 +1 es decir 11
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int binario, digito, posicion, resultado = 0 ;
	int vector[] = {2,4,8,16,32,64,128,256};
	
	printf("Ingrese un numero:\n");
	scanf("%d", &binario);
	while(binario > 0){
		digito = binario %10;
		if(digito ==1)
			resultado = resultado + vector[posicion];
		
		posicion ++;
		
		binario = binario /10;
	}
	printf("El resultado es %d: \n", resultado);

	return 0;
}

