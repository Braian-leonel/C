
#include <stdio.h>

int main()
{
	/*
	int sueldo_semanal, horas_trabajadas, total = 0;
	
	puts("sueldo del empleado");
	scanf("%d", &sueldo_semanal);
	puts("horario de trabajo: ");
	scanf("%d", &horas_trabajadas);
	if(horas_trabajadas < 41){
		total = sueldo_semanal + horas_trabajadas;
	}
	else if(horas_trabajadas >= 41 && horas_trabajadas <= 45){
		total = horas_trabajadas + sueldo_semanal *2;
	}
	else if(horas_trabajadas >= 46 && horas_trabajadas <= 48){
		total = horas_trabajadas + sueldo_semanal *3;
	}
	else if(horas_trabajadas == 50){
		puts("No esta permitido el pago adicional");
	}
	printf("pago: $%d", total);
	*/
	
	int saldo_actual, saldo_anterior, monto_compras, pago_depositado;
	int pago_minimo, causa_interes, multa, intereses;
	puts("digite tu saldo actual");
	scanf("%d", &saldo_actual);
	puts("digite su saldo anterior: ");
	scanf("%d", &saldo_anterior);
	puts("digite monto de las compras: ");
	scanf("%d", &monto_compras);
	puts("digite el pago que deposito en el corte anterior");
	scanf("%d", &pago_depositado);
	pago_minimo = saldo_actual * 15 / 100;
	intereses = saldo_actual * 85 /100;
	if(monto_compras > pago_minimo){
		causa_interes = saldo_actual * 12 /100;
		printf("%d causa de interes, por realizar el pago minimo", causa_interes); 
		multa = (saldo_actual * 5 / 100 ) - 200.0;
		printf("multa %%%d ", multa);
	}
	printf("%%%d pago minimo ", pago_minimo);
	printf("%%%d interes de compra", intereses);
	
	/*
	int horas;
	puts("digite la hora de estacionamiento: ");
	scanf("%d", &horas);
	if(horas >= 1 && horas <= 2){
		float tarifa = (float)horas * 5;
		printf("total tarifa: $%.2f", tarifa);
	}
	if(horas <= 3){
		float tarifa = (float)horas * 4;
		printf("total tarifa: $%.2f", tarifa);
	}
	if(horas <= 5){
		float tarifa = (float)horas * 3;
		printf("total tarifa: $%.2f", tarifa);
	}
	
	*/
	int alternativa, num1,num2,num3,num4,num5,mediante,producto, total = 0;
	int lado1,lado2,lado3,cuenta;
	puts("digite alternativas: ");
	puts("1 alternativa");
	puts("2 alternativa");
	puts("3 alternativa");
	scanf("%d", &alternativa);
	switch(alternativa){
		case 1:
				puts("digite los 5 numeros");
				scanf("%d""%d""%d""%d""%d", &num1,&num2,&num3,&num4,&num5);
				if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
					printf("%d el mayor", num1);
				else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
					printf("%d el mayor", num2);
				else if(num3 > num2 && num3 > num1 && num3 > num4 && num3 > num5)
					printf("%d el mayor", num3);
				else if(num4 > num2 && num4 > num3 && num4 > num1 && num4 > num5)
					printf("%d el mayor", num4);
				else
					printf("%d el mayor", num5);
		break;
		case 2:
				puts("digite los lados de un triangulo");
				scanf("%d""%d", &lado1,&lado2);
				total = lado1 + lado2;
				if(total > lado3)
					puts("el triangulo existe");
				else
					puts("el triangulo no existe");
		
		break;
		case 3:
				puts("digite el precio de un producto");
				scanf("%d", &producto);
				puts("digite la forma de pagar 1 - tarjeta 0 -efectivo");
				scanf("%d", &mediante);
				if(mediante == 1 && producto > 0){
					puts("digite el numero de cuenta: ");
					scanf("%d", &cuenta);
				}
				else if(mediante == 0 && producto > 0)
					puts("pago en efectivo, gracias!!!");
			
				else
					puts("opcion incorrecta");
				
			break;
		default:
				puts("opcion invalida");
		}
			
	
	return 0;
}

