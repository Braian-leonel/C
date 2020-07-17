/*
 *	 diseñe un programa que permite calclular su costo de la luz 
 * de un medidor
 */


#include <stdio.h>
#define TARIFA1 5.418
#define TARIFA2 7.018
#define TARIFA3 9.143
#define TARIFA4 11.254
#define LIMITE1 200
#define LIMITE2 500
#define LIMITE3 750

int main()
{
	float KWT;
	float recibo = 0;
	
	printf("Ingrese gasto de servicio: \n");
	scanf("%f", &KWT);
	
	if(KWT < LIMITE1)
		recibo = TARIFA1 * KWT;
	else if(KWT < LIMITE2)
		recibo = TARIFA2 * KWT;
	else if (KWT < LIMITE3)
		recibo = TARIFA3 * KWT;
	else
		recibo = TARIFA4 * KWT;
		
	printf("la cuenta total por %.1f Kwt es %.0f dolares \n",KWT, recibo );
	

	
	return 0;
}

