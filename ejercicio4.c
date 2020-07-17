/*
 * realize un programa que lea un entero de cinco digitos y determine si es o no palindromo 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int num,aux,resto, numinv = 0;
	
	printf("Ingrese un numero \n");
	scanf("%d", &num);
	aux = num;
	while(aux > 0){
		resto = aux%10;
		aux = aux/10;
		numinv = numinv*10 + resto;
	}
	if(numinv == num){
		printf("El numero es capicua");
}	else{
		printf("No es capicua");
}
	return 0;
}

