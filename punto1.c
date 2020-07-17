
#include <stdio.h>

int main()
{
	int y= 0,x,a,b,c;
	puts("digite el valor de a: ");
	scanf("%d", &a);
	
	puts("digite el valor de b: ");
	scanf("%d", &b);
	
	puts("digite el valor de c: ");
	scanf("%d", &c);
	
	puts("digite el valor de x: ");
	scanf("%d", &x);
	
	y= a*x*x + b*x +c;
	printf("resultado de la funcion cuadratica: %d", y);
	
	return 0;
}

