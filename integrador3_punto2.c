#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct {
	char denominacion[50];
	int presupuesto_inicial;
	int certificados [5];
}OBRA;

OBRA obras_gestion [12];

int i, j, suma_certificados=0;
const int cant_obras=12;   
int main (){
	int  salir=0;
	int certificados_a_modificar, numero_obra,  excedido=0;
	char obras_denominaciones_ordenadas [cant_obras][50];
	char aux[50];
	int porcentaje_excede_presupuesto = 0;
	int elegir;	
	for (i=0; i<cant_obras; i++){
		for (j=0; j<5; j++)
			obras_gestion[i].certificados[j]=0;
	}
	printf ("INGRESE LOS DATOS DE LAS %i OBRAS\n\n\n", cant_obras);
	for (i=0; i<cant_obras; i++){
		
		printf ("INGRESE LA DENOMINACION DE LA OBRA: ");
		fgets (obras_gestion[i].denominacion, 50, stdin);
		strtok(obras_gestion[i].denominacion, "\n");
		printf ("INGRESE EL PRESUPUESTO INICIAL: ");
		scanf ("%i", &obras_gestion[i].presupuesto_inicial);	
		while(getchar()!= '\n');
		printf ("\n\n");
	}
		
	while (!salir){
		
		system ("clear"); 
		printf ("Presione 1 para cargar los certificados de obras\n\n");
		printf ("Presione 2 para mostrar las obras ordenadas alfabeticamente\n\n");
		printf ("Presione 3 para  mostrar obras cuyos certificados (sumados) superan el limite del 30%%.\n\n");
		printf ("Presione 4 para salir\n\n\n\n");
		printf ("Opcion: ");
		scanf ("%d", &elegir);
		system ("clear");
		switch (elegir){	
			case 1: 
					printf ("Ingrese el numero de obra: ");
					if (!scanf ("%i", &numero_obra))exit (1);
					if (numero_obra <=0) {
						printf ("ERROR: NUMERO DE OBRA INCORRECTO");
						exit (1);
					}
					if (numero_obra>cant_obras) {
						system ("cls");
						printf ("ERROR: NO SE ENCONTRO UNA OBRA CON ESE NUMERO");
						exit (1);
					}
					--numero_obra;
					printf ("\n\nATENCION: los certificados que ingrese pueden remplazar a los certificados que ya existen de dicha obra.\n\nIngrese la cantidad de certificados a insertar o modificar: ");
					if (!scanf ("%i", &certificados_a_modificar)) exit(1);
					system ("clear");
					
					if (certificados_a_modificar <=0) {
						printf ("ERROR: CANTIDAD DE CERTIFICADOS INCORRECTOS");
						exit (1);
					}
					
					for (j=0; j<certificados_a_modificar && !excedido; j++){
						printf ("Certificado numero %i: ", j+1);
						scanf ("%i", &obras_gestion[numero_obra].certificados[j]);
						if (obras_gestion[numero_obra].certificados[j]<0) exit (1);
						suma_certificados=0;
						for (i=0; i<5 && !excedido; i++){
							suma_certificados+=obras_gestion[numero_obra].certificados[i];
							if(suma_certificados>obras_gestion[numero_obra].presupuesto_inicial*1.3){
								system ("cls");
								excedido=1;
							
							}
								
						} 
					
					}
					if (excedido) 	printf ("ADVERTENCIA! LA CARGA DE CERTIFICADOS SE HA INTERRUMPIDO.\n\n\nRAZON: el total invertido supera por mas del 30%% al presupuesto inicial");
					else printf ("\n\nLA CARGA FINALIZO CON EXITO");
					

				break;
			case 2:
						printf ("Ingrese el numero de obra: ");
						if (!scanf ("%i", &numero_obra))exit (1);
						if (numero_obra <=0) {
							printf ("ERROR: NUMERO DE OBRA INCORRECTO");
							exit (1);
						}
						if (numero_obra>cant_obras) {
							system ("cls");
							printf ("ERROR: NO SE ENCONTRO UNA OBRA CON ESE NUMERO");
							exit (1);
						}
						--numero_obra;
						printf ("\n\nATENCION: los certificados que ingrese pueden remplazar a los certificados que ya existen de dicha obra.\n\nIngrese la cantidad de certificados a insertar o modificar: ");
						if (!scanf ("%i", &certificados_a_modificar)) exit(1);
						system ("clear");
						
						if (certificados_a_modificar <=0) {
							printf ("ERROR: CANTIDAD DE CERTIFICADOS INCORRECTOS");
							exit (1);
						}
						
						for (j=0; j<certificados_a_modificar && !excedido; j++){
							printf ("Certificado numero %i: ", j+1);
							scanf ("%i", &obras_gestion[numero_obra].certificados[j]);
							if (obras_gestion[numero_obra].certificados[j]<0) exit (1);
							suma_certificados=0;
							for (i=0; i<5 && !excedido; i++){
								suma_certificados+=obras_gestion[numero_obra].certificados[i];
								if(suma_certificados>obras_gestion[numero_obra].presupuesto_inicial*1.3){
									system ("clear");
									excedido=1;
								
								}
									
							} 
						
						}
						if (excedido) 	printf ("ADVERTENCIA! LA CARGA DE CERTIFICADOS SE HA INTERRUMPIDO.\n\n\nRAZON: el total invertido supera por mas del 30%% al presupuesto inicial");
						else printf ("\n\nLA CARGA FINALIZO CON EXITO");
					
				break;			
			case 3:
						
					for (i=0; i<cant_obras; i++) strcpy (obras_denominaciones_ordenadas[i], obras_gestion[i].denominacion);

						for (i=0; i<cant_obras-1; i++){
							
							for (j=0; j<cant_obras-i-1; j++){
									if (strcmp(obras_denominaciones_ordenadas[j], obras_denominaciones_ordenadas[j+1])>0){
										
										strcpy (aux, obras_denominaciones_ordenadas[j]);
										strcpy (obras_denominaciones_ordenadas[j], obras_denominaciones_ordenadas[j+1]);
										strcpy (obras_denominaciones_ordenadas[j+1], aux);
									}
								
								}
							}
							
							for (i=0; i<cant_obras; i++){
								printf ("%s\n", obras_denominaciones_ordenadas[i]);
							}

				break;
			case 4:
					for (i=0; i<cant_obras; i++){
				for (j=0; j<5; j++)
					suma_certificados+=obras_gestion[i].certificados[j];
				if (suma_certificados>obras_gestion[i].presupuesto_inicial*porcentaje_excede_presupuesto)
					printf ("La obra : %s excede su presupuesto inicial de: %i ya que el inversion realizada fue de: $%i\n\n", obras_gestion[i].denominacion, obras_gestion[i].presupuesto_inicial, suma_certificados);
				suma_certificados=0;
				}
					salir=1;
			break;		
		}
	}
	return 0;
	
}

	
				
	

		
		
	

	
		
		
