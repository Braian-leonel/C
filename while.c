/*
 * realiza un programa que ingrese una palabra por teclado y que finalize cuando se ingresa CRTL + Z
 * 
 */


#include <stdio.h>

int main()
{
	char ch; 
	printf("Ingrese el texto: finalize con <CTRL + C> \n");
	
	while((ch = getchar())!= EOF)
		putchar(ch);
		
	
	
	return 0;
}

