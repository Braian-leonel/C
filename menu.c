

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opcion, ingreso, retirar, menu, saldo = 1000;
	int total_ingreso, total_retiro;
	do {
		printf("1 - ingresar dinero\n");
		printf("2 - retirar dinero\n");
		printf("3 - ver total dinero\n");
		printf("4 - salir\n"); 
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
				printf("Ingrese cantidad disponible\n");
				scanf("%d", &ingreso);
				total_ingreso = ingreso + saldo;
				printf("El ingreso fue un exito\n");
			break;
			case 2:
					printf("Ingrese el dinero a retirar\n");
					scanf("%d", &retirar);
					fflush(stdin);
				if(retirar < saldo){		
					total_retiro = saldo - retirar;
					printf("El retiro fue un exito\n");
				}
				
				else{
					printf("El monto ingresado es incorrecto\n");
					
				}break;
			case 3:
				printf("1- total de dinero de ingreso: \n");
				printf("2- total retiro del dinero: \n");
				printf("3- salir: \n");
				scanf("%d", &menu);
				switch(menu){
					case 1: 	printf("el total de saldo a su disposicion es: %d\n", total_ingreso);
					break;
					case 2: 	printf("el total de saldo a su disposicion es: %d\n", total_retiro);
					break;
					case 3:
					break;
					default: 	printf("Opcion incorrecta, vuelva a ingresar nuevamente una opcion\n");
					break;
				}
			break;
			case 4:
			break;
			default: printf("Opcion incorrecta, vuelva a ingresar nuevamente una opcion\n");
			break;	
		
		}
	
	}while(opcion != 4);
	
	return 0;
}

