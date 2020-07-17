#include<stdio.h>
main()
{
	int fila=0,columna=0,cont1=0,cont2=0;
	int matriz[50][2]={};
	int i=0,n=1,op,dni;
	//1 PARA ENTREGADO  2 PARA DEVUELTO
	do
	{
		printf("\n1.Registrar equipo");
		printf("\n2.Estado de equipo");
		printf("\n3.Retirar equipo");
		printf("\n4.Cantidad de entregados y devueltos \n");
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
		if(op==2)
		{
			printf("\nIngrese DNI: ");
			scanf("%d",&dni);
			for(fila=0;fila<50;fila++)
			{
				if(matriz[fila][1]==dni)
				{
					if(matriz[fila][0]==1)
					{
						printf("\nEstado: Entregado\n");
						break;
					}
					if(matriz[fila][0]==2)
					{
						printf("\nEstado: Devuelto");
						break;
					}
				}
			}
		}
		if(op==3)
		{
			printf("\nIngrese DNI: ");
			scanf("%d",&dni);
			for(fila=0;fila<50;fila++)
			{
				if(matriz[fila][1]==dni)
				{
					matriz[fila][0]=2;
					printf("\nENTREGANDO EQUIPO\n");
					break;
				}
				
			}
		}
		if(op==4)
		{
			for(fila=0;fila<50;fila++)
			{
				if(matriz[fila][0]==1)
				{
					cont1++;
				}
				if(matriz[fila][0]==2)
				{
					cont2++;
				}
			}
			printf("\nEquipos entregados : %d",cont1);
			printf("\nEquipos devueltos : %d",cont2);
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
