#include <iostream>

using namespace std;
int main()
{
		
	int saldo_actual, saldo_anterior, monto_compras, pago_depositado;
	int pago_minimo, causa_interes, multa, intereses;
	cout<<"digite tu saldo actual: "<<endl;
	cin>>saldo_actual;
	cout<<"digite su saldo anterior: "<<endl;
	cin>>saldo_anterior;
	cout<<"digite monto de las compras: "<<endl;
	cin>>monto_compras;
	cout<<"digite el pago que deposito en el corte anterior: "<<endl;
	cin>>pago_depositado;
	pago_minimo = saldo_actual * 15 / 100;
	intereses = saldo_actual * 85 /100;
	if(monto_compras > pago_minimo){
		causa_interes = saldo_actual * 12 /100;
		cout<<causa_interes<< "causa de interes, por realizar el pago minimo"; 
		multa = (saldo_actual * 5 / 100 ) - 200.0;
		cout<<"Multa por pago minimo: " <<multa;
	}
	cout<<" pago minimo "<<pago_minimo<<endl;
	cout<<" interes de compra"<<intereses<<endl;

	
	return 0;
}

