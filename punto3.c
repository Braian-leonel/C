#include <stdio.h>

int main()
{
	int dolar,u,d,c;
	puts("digite un monto de dolares: ");
	scanf("%d", &dolar);
	c = dolar / 100;
	if(c < 100){
		printf("%d bill(s) of 100\n",c);
	}else{
		puts("0 bill(s) of 100");
	}
	d = (dolar / 10) % 10;
	if(d < 50){
		puts("1 bill(s) of 50");
	}else{
		puts("0 bill(s) of 50");	
	}
	u = dolar % 10;
	if(u< 10){
		puts("1 bill(s) of 20");
	}

	return 0;
}

