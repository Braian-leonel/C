/*
 
 */


#include <stdio.h>

int main(int argc, char **argv)
{ 
	int tope, i;
	int num, cua, cub;
	printf("digite un valor que sea el maximo ingresado:\n ");
	scanf("%d", &tope);
	printf("\n\n\t\tNumero cuadrado cubo");
	for(i=0; i<=tope; ++i){
		num = 0 + i;
		cua = num * num;
		cub = num * num * num;
		
	}
	printf("\n\n\t\t %d ,      %d,       %d\n\n",num,cua, cub);  
	return 0;
}

