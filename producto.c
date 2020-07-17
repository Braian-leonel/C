#include <stdio.h>

int main(){
	int producto[10];
	char productos[20];
	int precio_costo = 0;
	int precio_venta = 0;
	int codigo = 0;
	int cantidad_vendida = 0;
	int ganancia = 0;
	int i;
	
	printf("Ingrese la cantidad de producto: \n");
	scanf("%d", &producto[10]);
	for(i = 0; i<producto[10]; ++i){
		
		printf("Ingrese los producto tal :  \n");
		scanf("%s", productos);
		
		printf("Ingrese el precio del costo : ");
		scanf("%d", &precio_costo);
		
		printf("Ingrese el precio de venta : ");
		scanf("%d", &precio_venta);
		
		
		printf("Ingrese el codigo  : ");
		scanf("%d", &codigo);
		
		printf("Ingrese la cantidad vendida : ");
		scanf("%d", &cantidad_vendida);
		
		ganancia = (precio_costo + precio_venta) * cantidad_vendida;
	
	}
	
	printf("Ganancia del mes es:  %d", ganancia);
	
	return 0;
}

