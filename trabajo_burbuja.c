
#include <stdio.h>
#include <stdlib.h>
#define TAB 20

typedef struct trabajadores{
	char nombre[40];
	int legajo;
	float sueldo;

}trabajador_t[TAB];

int main()
{
	trabajador_t t;
	int n, i;
	printf("Ingrese la cantidad de trabajadores: \n");
	scanf("%i", &n);
	for(i= 0; i<n; ++i){
		printf("Ingrese el nombre del trabajador:\n");
		scanf("%s",t[TAB].nombre); fflush(stdin);
		printf("Ingrese el legajo del trabajador:\n");
		scanf("%d",&t[TAB].legajo); fflush(stdin);
		printf("Ingrese el sueldo del trabajador:\n");
		scanf("%f",&t[TAB].sueldo); fflush(stdin);
	}
	
	for(i=0; i<n; i++){
		if(t[TAB].sueldo > t[TAB+i].sueldo){
		 printf("El sueldo mas alto es %s, %i, %4.f", t[TAB].nombre, t[TAB].legajo, t[TAB].sueldo);
		}
		
	}
	
	
	return 0;
}

