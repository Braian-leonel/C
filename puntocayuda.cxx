
#include <iostream>

using namespace std;
int main()
{
	
	int alternativa, num1,num2,num3,num4,num5,mediante,producto, total = 0;
	int lado1,lado2,lado3,cuenta;
	cout<<"digite alternativas: "<<endl;
	cout<<"1 alternativa" <<endl;
	cout<<"2 alternativa" <<endl;
	cout<<"3 alternativa" <<endl;
	cin>> alternativa;
	switch(alternativa){
		case 1:
				cout<<"digite los 5 numeros: "<<endl;
				cin>> num1 >> num2 >> num3>>num4>>num5;
				if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
					cout<<num1<<" es el mayor";
				else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
					cout<<num2<<" es el mayor";
				else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
					cout<<num3<<" es el mayor";
				else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
					cout<<num4<<" es el mayor";
				else
					cout<<num5<<" es el mayor";
		break;
		case 2:
				cout<<"digite los lados de un triangulo: ";
				cin>>lado1>>lado2>>lado3;
				total = lado1 + lado2;
				if(total > lado3)
					cout<<"el triangulo existe";
				else
					cout<<"el triangulo no existe";
		
		break;
		case 3:
				cout<<"digite el precio de un producto"<<endl;
				cin>>producto;
				cout<<"digite la forma de pagar 1 - tarjeta 0 -efectivo: ";
				cin>>mediante;
				if(mediante == 1 && producto > 0){
					cout<<"digite el numero de cuenta: "<<endl;
					cin>>cuenta;
					cout<<"numero de cuenta: "<<cuenta<<endl;
				}
				else if(mediante == 0 && producto > 0)
					cout<<"pago en efectivo, gracias!!!";
			
				else
					cout<<"opcion incorrecta";
				
			break;
		default:
				cout<<"opcion invalida";
		}
			
	
	
	return 0;
}

