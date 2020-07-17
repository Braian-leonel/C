#include <stdio.h>

int main(int argc, char **argv)
{
	int y=0,w=0,d=0,number;
	puts("digite la fecha: ");
	scanf("%d", &number);
	y = number / 365;
	printf("years: %d\n", y);
	w = number / 12 * 365;
	printf("weeks : %d", w);
	
	return 0;
}

