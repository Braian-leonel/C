/*
  
 */


#include <stdio.h>
#define PLAZO_VENCIMIENTO 10
int main(int argc, char **argv)
{
	int dia_actual, dia_elaboracion;
	
	puts("*******************************************");
	puts("*Verificador de vencimiento - FERTRED S.A.*");
	puts("*******************************************");
	
	puts("!Hola¡");
	printf("Ingrese el dia del mes actual: \n");
	scanf("%d", &dia_actual);
	
	printf("Ingrese el dia de elaboracion de producto: \n");
	scanf("%d", &dia_elaboracion);
	
	if(dia_actual - dia_elaboracion < PLAZO_VENCIMIENTO){
		puts("Ups- el producto ya esta vencido");
	}else{
		printf("!Buenisimo todabia quedan tanto: %d para consumir¡", dia_actual-dia_elaboracion);
	}
	 
	return 0;
}

