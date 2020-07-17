#include <iostream>
#define CANT_MESES_DEL_ANIO 12

using namespace std;
int main (){
	
	int ventas [CANT_MESES_DEL_ANIO][5]={};
	int sucursal, mes, total_mes=0, total_vendido_anio=0;
	
	setlocale(LC_ALL, "spanish");

	cout<<"Ingrese numero de mes: ";
	cin>>mes;
	cout<<"Ingrese numero de sucursal: ";
	cin>>sucursal;
	cout<<"Ingrese el total vendido durante el mes: ";
	cin>>total_mes;
	
	while(mes!=0 && sucursal!=0 && total_mes!=0){
		
		system ("cls");	
		ventas[mes][sucursal]=total_mes;
		
		cout<<"Ingrese numero de mes: ";
		cin>>mes;
		cout<<"Ingrese numero de sucursal: ";
		cin>>sucursal;
		cout<<"Ingrese el total vendido durante el mes: ";
		cin>>total_mes;
	
	}
	
	system ("cls");
	
	
	cout<<"Ingrese numero de sucursal para calcular el total vendido en todo el año: ";
	cin>>sucursal;
	
	for (mes=0; mes<CANT_MESES_DEL_ANIO; mes++){
		total_vendido_anio+=ventas[mes][sucursal];
	}
	system ("cls");
	cout<<"El total vendido por la sucursal durante todo el año es: $"<< total_vendido_anio;
	
	
	return 0;
}
