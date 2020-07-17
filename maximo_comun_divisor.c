/*
 Determina el maximo comun divisor (mcd) de n numeros, en base al siguiente algoritmo
 * calcular el mcd de los dos primeros numeros, luego de calcular el mcd de este resultado
 * con el tercer numero, hasta terminar con los n numeros o el mcd sea igual a 1 
 */


#include <stdio.h>

int main()
{
	int mcd, num, n , residuo, conta = 1;
		
	do{
		printf("Ingrese una cantidad de numero en serie: \n");
		scanf("%d", &n);
	}while(n <= 1);
	
	do{
		printf("Ingrese una cantidad de numero positivo en serie: \n");
		scanf("%d", &num);
	}while(num<= 0);
	
	mcd = num;
	while(mcd != 1 && ++conta<= n)
	
	do{
		printf("Ingrese otro numero positivo en serie:\n");
		scanf("%d", &num);
	}while(num <= 0);
	
	residuo = 1;
	while(residuo){
		residuo = mcd % num; 
		mcd = num;
		num = residuo;
	}
	if(mcd != 1){
		printf("mcd = %d\n", mcd );
	}else
		printf("No hay mcd");
	
	return 0;
}

