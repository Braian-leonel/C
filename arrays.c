#include <stdio.h>

int main()
{
	int i,n, mayor=0;

	printf("Ingrese la cantidad de elementos: \n");
	scanf("%d", &n);
	int array[n];
	for(i= 0; i<n; ++i){
		printf("Ingrese numero %d de elemento en el array: \n",1+i);
		scanf("%d", &array[i]);
		
		if(mayor < array[i]){
			mayor = array[i];
		
			}				

}
	printf("El elemento que se mayor es: %d\n", mayor);
		
	
	
	return 0;
}

