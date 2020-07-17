/*
  Realizar un programa que determine la cantidad de dinero futuro F(incluyendo la cantidad inicial)
  * que se acumularan en una cuenta de un banco despues de n años, si se conocen la cantidad depositada
  * inicialmente P y el tanto por ciento anual de interes compuesto aplicado i(se expresa en tanto por uno) la formula
  * para calcular es : f = p(1+i)n
 */


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int f = 0;
	int p = 0;
	int i = 0;
	int n = 0;
	
	printf("Ingrese la cantidad inicial: \n");
	scanf("%d", &p);
	
	printf("Ingrese el año depositado: \n");
	scanf("%d", &n);
	
	printf("Digite la tasa de interes: \n");
	scanf("%d", &i);
	
	
	f = p*(1+i/100)*n*n;
	
	printf("La cantidad de dinero acumulado es de: %d\n", f);
	return 0;
}

