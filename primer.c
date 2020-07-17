#include <stdio.h>
#define EMP 5

typedef struct empleados{
	
	char nombre[20];
	char apellido[20];
	float sueldo;

}empleado_t[EMP];


int main(){
	empleado_t em;
	int i,n = 0;
	
	printf("Ingrese la cantidad de empleados: \n");
	scanf("%i", &n);
	
	for(i = 0; i<n; ++i){
		fflush(stdin);
		printf("Ingrese el nombre del empleado: \n");
		scanf("%s", em[EMP].nombre);
		printf("Ingrese el apellido del empleado: \n");
		scanf("%s", em[EMP].apellido);
		printf("El salario del empleado es: \n");
		scanf("%f",&em[EMP].sueldo); fflush(stdin);
	}
	printf("\n << LOS DATOS DE LOS EMPLEADOS SON: >>\n");
	
	for(i= 0; i<n; ++i){
		printf("El nombre del empleado es: %s\n", em[EMP].nombre);
		printf("El apellido del empleado es: %s\n", em[EMP].apellido);
		printf("El salario del empleado es: %2.f\n", em[EMP].sueldo);
	}
	
	return 0;
}
