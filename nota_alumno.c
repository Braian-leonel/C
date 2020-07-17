
#include <stdio.h>

int main()
{
	int n, i;
	int nota=0;
    int positivos=0;
    int negativos=0;
    int aprobados=0;
    int suspendidos=0;
    int bien=0;
    int notable=0;
    int sobresaliente=0;
    int suficiente=0;
    
    printf("Ingrese cantidad de alumno: \n");
    scanf("%d", &n);


	for(i = 0; i<n; ++i){
		
	//	printf("Ingrese la nota del alumno %d: ", i+1);
		
			printf("\n Notas de los alumnos: %d(-1 para para finalizar)\n", i+1);
			
			printf("\nNota... : ");
			scanf("%d", &nota);
			//Controlar si quiere finalizar
			if(nota != -1){
			
			if(nota > 0)
				positivos ++;
			else if(nota < 0)
				negativos++;
			if(nota<5)
                suspendidos++;
            else
                aprobados++;
            // controlar calificaciones
           if(nota>=5 && nota<6)
                suficiente++;
            else if(nota>=6 && nota<=7)
                bien++;
            else if(nota>=7 && nota<9)
                notable++;
            else if(nota>=9)
                sobresaliente++;
}				
			
	
	
}

	
	
		
    printf("\nNOTAS DE LOS ALUMNOS");
    printf("\nAlumnos aprobados ...............: %d",aprobados);
    printf("\nAlumnos suspendidos .............: %d",suspendidos);
    printf("\nAlumnos con nota suficiente .....: %d",suficiente);
    printf("\nAlumnos con nota bien ...........: %d",bien);
    printf("\nAlumnos con nota notable ........: %d",notable);
    printf("\nAlumnos con nota sobresaliente ..: %d",sobresaliente);
	
	
	return 0;
}

