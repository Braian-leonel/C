/*
 * programa cliente
 * funcion cliente, devuelve el el saldo maximo de un cliente
 * en otro funcion devuelve listado de cliente ordenado alfabeticamente
 */
#include <stdio.h>
#include <string.h>
#define MAX 2
#define COLUMNAS 2
#define FILAS 2
typedef struct{
	float saldo;
	int legajo;
}EMPRESARIOS;
const int ordenar_cliente = 4;
int saldo_maximo(EMPRESARIOS empresario[]);
char ordenado(char clientes[][2]);
int main()
{
	EMPRESARIOS empresarios[MAX];
	char matriz_clientes[FILAS][COLUMNAS];
	saldo_maximo(empresarios);
	ordenado(matriz_clientes);
	
	return 0;
}
int saldo_maximo(EMPRESARIOS empresario[]){
	int i;
	float mayor;
	for(i = 0; i<MAX; i++){
		puts("digite el saldo del empleado: ");
		scanf("%f", &empresario[i].saldo);
		puts("digite el legajo del empleado: ");
		scanf("%d", &empresario[i].legajo);
	}
	mayor = empresario[0].saldo;	
	for(i = 0; i<MAX; i++){
		if(empresario[i].saldo > mayor){
			mayor = empresario[i].saldo;
		}
	}
	return printf("El mayor saldo es: %.2f\n", mayor);
}
char ordenado(char clientes[][2]){
	int i,j; 
	char aux[2][2];
	for(i = 0; i<FILAS; i++){
		for(j= 0;j<COLUMNAS; j++){
			puts("digite los nombres de los clientes");
			scanf("%s", &clientes[i][j]);
		}
	}
	for(i = 0; i<ordenar_cliente-1; i++){
			for(j= 0; j<ordenar_cliente-i-1; j++){
				if (strcmp(clientes[j], clientes[j+1])>0){
						strcpy (aux[j],clientes[j]);
						strcpy (clientes[j], clientes[j+1]);
						strcpy (clientes[j], clientes[j+1]);
				}
			}
	}
	for (i=0; i<ordenar_cliente; i++){
			printf("%s\n", clientes[i]);
	}
	return clientes[i][j];
}
