/*
 *Realize un programa con menu que pueda sumar dos numeros, restar, multiplicar y dividir 
 */


#include <stdio.h>

#include <stdlib.h>

int main(int argc, char **argv)
{
	float num1, num2;
	char ch;
	
	puts("1- sumar dos numeros");
	puts("2- restar dos numeros");
	puts("3- multiplicar dos numeros");
	puts("4- dividir dos numeros");
	ch = getchar();
	printf("\n");
	
	if(ch>'0' && ch <= '4'){ //Eligue la opcion de 1 a 4 
		printf("Ingrese el primer numero:\n");
		scanf("%f", &num1);
		
		printf("Ingrese el segundo numero:\n");
		scanf("%f", &num2);
	
	}
	switch(ch){
		case '1': printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2 );
				break;
		case '2': printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2 );
				break;
		case '3': printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2 );
				break;		
		case '4': if(num2)
					printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2 );
				else
					printf("Division por ");
				break;
		default: printf("La opcion es incorrecta");
	
	}
	
	return 0;
}

