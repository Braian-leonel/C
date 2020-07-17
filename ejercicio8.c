/*
 *  
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i, j;
	printf("Ingrese el tamaño de un cuadrado\n");
	scanf("%d", &n);
	if(n >= 1  && n <= 20){
		for(i= 0; i<n; ++i){
			printf("*");
		}
		printf("\n");
		for(i=0; i<n-2; i++){
			printf("*");
			for(j=0; j<n-2; ++j){
				printf(" ");
			}
			printf("*");
		}
		
		for(i= 0; i<n; ++i){
			printf("*");
		}
	}
	
		
	
	
	return 0;
}

