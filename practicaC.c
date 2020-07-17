/* 
 */


#include <stdio.h>

int main()
{
	int n = 0,opcion,legajo, saldo, retirar, ingreso, j= 0, k = 0, i;
	float VC;
	char salir, divisa, codigo;
	int empleado[n];

	puts("Digite cantidad de empleados: ");
	scanf("%d", &n);
	for(i = 0; i<n; ++i){
		printf("Digite el saldo del empleado %d: ",i+1);
		scanf("%d", &saldo);
		puts("Digite el legajo del empleado: ");
		scanf("%d", &legajo);
		do{
			puts("1. consulte saldo");
			puts("2. desea ingresar saldo a su cuenta");
			puts("3. desea retirar saldo de su cuenta");
			puts("4. desea realizar compra o venta de codigo divisa");
			scanf("%d", &opcion);
			switch(opcion){
				case 1:
						printf("Su saldo actual es de: %d\n", saldo);
						while(getchar() != '\n');
						puts("Desea salir? S/N");
						scanf("%c", &salir);
							
				break;
				case 2: puts("Digite caunto desea ingresar a su saldo: ");
						scanf("%d", &ingreso);
						if(ingreso > 0){
							printf("Monto de ingreso %d\n", ingreso);
							ingreso = ingreso + saldo;
							printf("Monto total del saldo %d\n", ingreso);
						}else
							puts("ERROR ");
						while(getchar() != '\n');
						puts("Desea salir S/N?");
						scanf("%c", &salir);
							
				break;
				case 3:
						puts("¿Digite cuanto deseas retirar? ");
						scanf("%d", &retirar);
						if(retirar > 0){
							printf("Monto de retiro %d\n", retirar);
							retirar = saldo - retirar;
							printf("Monto total del saldo %d\n", retirar);
						}else{
							puts("ERROR");
							while(getchar() != '\n');
					     	puts("Desea salir? S/N");
				    		scanf("%c", &salir);
						}
				break;
				case 4: 
						while(getchar() != '\n');
						puts("Desea realizar C/V 1. compra 2. Venta");
						scanf("%c", &codigo);
						if(codigo == 'C'){	
							while(getchar() != '\n');
							puts("que codigo de divisa desea ralizar: D/E:");
							scanf("%c", &divisa);
							switch(divisa){
								case 'D':
										k++;
										puts("¿Digite cuanto dolar desea comprar?");
										scanf("%f", &VC);
										VC = VC * 70.30;
										saldo += VC;
										puts("¿desea salir S/N");
										scanf("%c", &salir);
								break;
								case 'E':
										puts("Digite cuanto euro desea comprar");
										scanf("%f", &VC);
										VC = VC * 80.30;
										saldo += VC;
										puts("¿desea salir? S/N");
										scanf("%c", &salir);
								break;
								default: puts("Error al ingresar el menu");
						}
							}else if(codigo == 'V'){
								while(getchar() != '\n');
								puts("que codigo de divisa desea ralizar: D/E:");
								scanf("%c", &divisa);
								switch(divisa){
									case 'D':
										     puts("Digite cuanto dolar quiere vender: ");
										     scanf("%f", &VC);
										     VC = VC * 68.30;
										     saldo -= VC;
										     puts("¿Desea salir? S/N");
										     scanf("%c", &salir);
									break;
									case 'E':
											puts("Digite cuanto euro quiere vender: ");
											scanf("%f", &VC);
											VC = VC * 70.60;
											saldo -= VC;
											puts("Desea salir? S/N");
											scanf("%c", &salir);
									break;
									default:
											puts("ERROR AL ELEGIR OPCION");
											
								j++;			
								}
								}else
									puts("Error al elegir codigo");
			break;					//cierra el if 
			default: puts("Error al elegir menu");				
			}//Cierra el primer switch
		
		}while(salir != 'S');//Cierra el do while
	break;
	}//Cierra llave for
	if(empleado[retirar] > empleado[retirar +1])
		printf("El empleado con el legajo %d retiro mas saldo es %i con retiro de %d\n",legajo, saldo, retirar);

	if(empleado[ingreso] > empleado[ingreso +1])
		printf("El empleado con el legajo %d que ingreso mas saldo a su cuenta %i, con ingreso de %d\n",legajo, saldo, ingreso);

	printf("El total de transacciones de compras %d, transacciones de ventas %d\n", k, j);
	return 0;
}

