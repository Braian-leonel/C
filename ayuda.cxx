
#include <iostream>
using namespace std;

int main()
{
	int sueldo_semanal, horas_trabajadas, total = 0;
	
	cout<<"sueldo del empleado: "<<endl;
	cin>>sueldo_semanal;
	cout<<"horario de trabajo: ";
	cin>>horas_trabajadas;
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
	cout<<"pago adicional : $" <<total;
	
	return 0;
}

