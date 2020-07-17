/*
	Setencia Do While  
	* */


#include <stdio.h>

int main()
{
	/*
	int num;
	
	do{
		printf("Ingrese numeros enteros positivos que sean menor a 100:\n");
		scanf("%5d", &num);
		
	}while(num <= 0 || num >= 100);
		*/
		
	long num =1, cont, res;
	
	while(num != 0){
		do{
			printf("Ingrese un numero, finalize con <0>:\n");
			scanf("%ld", &num);
		
		}while(num < 0);
		
		res = 1;
		cont = 1;
		
		while(++cont <= num / 2 && res )
			if(num % cont == 0) //Equivale a res = num % cont
				res = 0;
		if(num){
		}
		  if(res)
			printf("El numero %ld es primo\n", num);
		else{
			printf("El numero %ld no es primo\n ", num);
	}
	} 

	return 0;
}

