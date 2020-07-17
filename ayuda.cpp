#include<stdio.h>
main()
{
	int fila=0,columna=0;
	int matriz[50][2]={};
	int i=0,n=1,op,dni;
	//1 PARA ENTREGADO  2 PARA DEVUELTO
	do
	{
		printf("1.Registrar equipo");
		printf("\n2.Devolucion de equipo\n");
		scanf("%d",&op);
		if(op==0)break;
		if(op==1)
		{
			printf("\nIngrese DNI: ");
			scanf("%d",&dni);
			for(fila=0;fila<50;fila++)
			{
				if(matriz[fila][1]==0)
				{
					matriz[fila][1]=dni;
				     matriz[fila][0]=1;
				     break;
				}
			}
		}
	}while(i<=50 && n>0);
	
	printf("\nmatriz\n");
		for(fila=0;fila<50;fila++)
			{
				printf("\n");
				for(columna=0;columna<2;columna++)
				{
					if(matriz[fila][columna]!=0)
					printf(" %d",matriz[fila][columna]);
				}
			}
}
