/*
 * par impar
 */


#include <stdio.h>

int main()
{
	/*
	int a;
	printf("Diguite un numero");
	scanf("%d", &a);
	if(a % 2 == 0){
		puts("El entero es par");
	}else{
		puts("El entero es impar");
	}*/
	/*
	int num;
	printf("Digite un numero:");
	scanf("%d", &num);
	if (num > 0)
		printf("El numero %d es positivo", num);
	if(num == 0){
		puts("El numero es igual a 0");
		num ++;
	}*/
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
		printf("%5c", ch);
	
	return 0;
}

