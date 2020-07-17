/*
  
 */


#include <stdio.h>
#define EMPLEADO 10
struct empleado{
	char nombre[20];
	char apellido[20];
	float sueldo;
	int legajo;
	float total;

}typedef empleado_t[EMPLEADO];
int main()
{
	int i, n, opc;
	float descontar = 0; //total = 0;
	empleado_t em;
	//char ch;
	printf("Ingrese la cantidad de empleado:\n");
	scanf("%d", &n);
	for(i = 0; i<n; i++){
	
		printf("Ingrese el sueldo del empleado:\n");
		scanf("%f", &em[i].sueldo);
		printf("Los nombres del empleado:\n");
		scanf("%s", em[i].nombre);
		printf("Ingrese el apellido de los empleados\n");
		scanf("%s", em[i].apellido);
		printf("Ingrese el legajo del empleado:");
		scanf("%d", &em[i].legajo);
	  }
	  
  
	  puts("1. el sueldo de cada empleado");
	  puts("2. descontar sueldo");
	  puts("3. retirar sueldo");
	  puts("4. salir");
	  printf("Digite una opcion");
	  printf("\n");
	  scanf("%d", &opc);
	  switch(opc){
		case 1:
				em[i].total = em[i].sueldo + em[i+1].sueldo;
				printf("El sueldo total de los empleados: %f",em[i].total);
			
		break;
		case 2:  
		case 3:		 
		break;
		case 4:  printf("Gracias por visitarnos");
		break;
		default: puts("Error de opcion, vuelva a ingresar una opcion");
	  }
	  
  
		

	
	return 0;
}

