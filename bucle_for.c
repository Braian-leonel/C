/*

 */


#include <stdio.h>

int main(int argc, char **argv)
{
	/*int cont;
	
	for(cont = 0; cont<= 40; ++cont){
		printf("%5d", cont);
	
	}
	printf("/n");	*/
	/*
	float deuda;
	
	for(deuda = 100.0; deuda<130.0; deuda*=1.1)
		printf("Su deuda asciende a %.2f\n", deuda);*/
	/*	
	int ans = 2;
	int n;
	
	for(n = 3; ans<=100;){
		printf("%5d", ans);
		ans *= n; */
		
		/*	
	int num;
	for(;num!=0;){
		printf("Ingrese un numero, finalize con <0>\n");
		scanf("%5d", &num);
	}*/
	
	/*	
	int num = 1;
	int sum = 0;
	
	for(printf("Ingrese un numero, finalize con <0>\n"); num != 0; sum += num){
		scanf("%d", &num);
	} printf("la suma total es de: %d", sum);*/
	
	int minutos, costo;
	for(minutos = 5, costo =20; minutos<= 15;minutos+= 5, costo += 12 ){
		printf("%5d""%5d", minutos, costo);
		
	}
	
		
		
	
	
	return 0;
}

