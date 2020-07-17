/*
 Considere dos matrices A y B, desarrollo un programa que permita realizar la multiplicación de las mismas. 
 */


#include <stdio.h>
#define TAM3 3
#define TAM1 3
#define TAM2 3



int main()
{
	int matrizA[TAM1+1][TAM1+1],i,j;
	int matrizB[TAM2+1][TAM2+1];
	int matrizTotal[TAM3][TAM3];
	
	//INICIALIZO LAS MATRIZES
	for(i=0;i<TAM1+1;i++)
		for(j=0;j<TAM1+1;j++)
                 matrizA[i][j] = 0;
    
	for(i=0;i<TAM2+1;i++)
		for(j=0;j<TAM2+1;j++)
                 matrizB[i][j] = 0;

    for(i=0;i<TAM3;i++)
		for(j=0;j<TAM3;j++)
                 matrizTotal[i][j] = 0;

    
    //INGRESO LOS DATOS DE LA MATRIZ B           
    for(i = 0; i<TAM1+1; i++){
		for(j= 0; j<TAM1+1; j++){
			printf("Ingresar dato entero de la matriz A en ( fila[%d] columna[%d] ):",i,j);
			scanf("%d",&matrizA[i][j]);
		}
		printf("\n");
	}       
	//INGRESO LOS DATOS DE LA MATRIZ B
	for(i = 0; i<TAM2+1; i++){
		for(j= 0; j<TAM2+1; j++){
			printf("Ingresar dato entero de la matriz B en ( fila[%d] columna[%d] ):",i,j);
			scanf("%d",&matrizB[i][j]);
		}
		printf("\n");
	}       
	
	//MUESTRO LOS DATOS DE LA MATRIZ A
   for(i=0;i<TAM1;i++){
		for(j=0;j<TAM1;j++)
			printf("%d\t",matrizA[i][j]);

		printf("\n");
 }
	//MUESTRO LOS DATOS DE LA MATRIZ B
	for(i=0;i<TAM2;i++){
		for(j=0;j<TAM2;j++)
			printf("%d\t",matrizB[i][j]);

		printf("\n");
 }
 
 
	
	  // ACUMULO EN LA ULTIMA POSICION DE LA MATRIZ
	
	for(i=0;i<TAM3;i++){
		for(j=0;j<TAM3;j++){
			matrizTotal[i][j] = matrizA[i][j]*matrizB[i][j];
			    	
		}
 }
 
 
 
 
 //MUESTRO EL RESULTADO DE LA MULTIPLICACION
 
	for(i=0;i<TAM3;i++){
		for(j=0;j<TAM3;j++){
		printf("%d\t",matrizTotal[i][j]);
		
        }
        printf("\n");
}

	return 0;
}

