/*
 * 
 */


#include <stdio.h>

int main()
{
	/*
	int num, salario;
	while(num != -1){
	do{
		puts("Ingrese un valor <-1> para terminar");
		scanf("%d", &num);
		
	}while(num > 0);
		salario = num * 9 / 100 +200;
		printf("Su salario %d", salario);
	}*/
	/*
	int dia;
	long int dd, mm, aa;
	puts("Ingrese la fecha:");
	scanf("%ld-%ld-%ld", &dd,&mm,&aa);
	dia = (int)(30.42 * (mm-1)) + dd;
	printf("valor entero del ciclo %d\n", dia);
	if(mm == 2){
		dia += 1;
		puts("FEBRERO");
	}
	if(mm > 2 && mm < 8){
		dia -= 1;
		puts("MARZO, ABRIL, MAYO, JUNIO, JULIO");
	}
	if(aa % 4 == 0 && mm > 2){
		dia += 365;
		dia += 1;
		printf("AÑO BICIESTO %d", dia);
	}
	if(dd >1 && mm > 1 && aa > 60){
	dia += 1461;
	puts("ciclo completo");
}*/
/*
float y, x= 100;
int *p;
p = &x;
y = *p;
printf("x = %.2f, y = %.2f", x, y);
*/
/*
int x = 100;
int *p1, *p2;
p1 = &x;
p2 = p1;
printf("direccion de x = %p, puntero p2 = %p\n", &x,p2);
printf("Contenido de p2 es = %d", *p2);
*/

char *p = "Braian";
char *aux;

puts("Cadena original");
puts(p);

for(aux = p; *aux; aux++ )
	puts("Cadena al reves");
for(--aux;aux >= p; --aux ){
	putchar(*aux);
}


	return 0;
}

