/*
  usando switch imprima cual es vocal y cuan no
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	char ch;
	printf("Ingrese una vocal:\n");
	scanf("%c", &ch);
	
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("El caracter %c es vocal:", ch);
		break;
		default : printf("El caracter %c no es vocal: ", ch);
	
	
	}
	
	return 0;
}

