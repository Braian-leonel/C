#include <stdio.h>
#define KWh 1.20
#define KWh2 1.50
#define KWh3 1.80
#define KWh4 2.00
int main()
{
	int c,total=0,porcentaje = 0,monto_total=0;
	puts("digite la cantidad de energia consumida");
	scanf("%d", &c);
	if(c == 199){
		total = c*KWh;
		printf("consumido %d, rate %.2f total %d",c,KWh,total);
	}
	if(c > 200 && c <= 400){
		total = c*KWh2;
		if(total >= 400){
			porcentaje = total * 15 / 100;
			monto_total = porcentaje + total;
			printf("consumido %d, rate %.2f,recargo %d mount change %d, total %d\n",c,KWh2,porcentaje,total,monto_total);
		}else{
			printf("consumido %d, rate %.2f, total %d\n",c,KWh2,total);
		
		}	
	}	
	if(c > 400 && c <= 600){
			total = c*KWh3;
		if(total >= 400){
			porcentaje = total * 15 / 100;
			monto_total = porcentaje + total;
			printf("consumido %d, rate %.2f,recargo %d mount change %d, total %d\n",c,KWh3,porcentaje,total,monto_total);
		}else{
			printf("consumido %d, rate %.2f, total %d\n",c,KWh3,total);
		
		}	
	}
	if(c > 600){
		total = c*KWh4;
		if(total >= 400){
			porcentaje = total * 15 / 100;
			monto_total = porcentaje + total;
			printf("consumido %d, rate %.2f,recargo %d mount change %d, total %d\n",c,KWh4,porcentaje,total,monto_total);
		}else{
			printf("consumido %d, rate %.2f, total %d\n",c,KWh4,total);
		
		}	
	}
	

	return 0;
}

