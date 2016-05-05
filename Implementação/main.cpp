#include <iostream>
#include "Delta.h"
#include "ValorX1X2.h"

using namespace std;

int main(int argc, char** argv) {
	int escolha;
	float a,b,c;
	float resultado[2];
	
	cout << "-------------------Calculadora de Bhaskara-------------------"<< endl;
	cout << "_____________________________________________________________"<< endl;
	cout << "-----------------------------Menu----------------------------"<< endl << endl;
	cout << "1 - Iniciar Calculo"<<endl;
	cout << "2 - Ajuda"<<endl;
	cout << "0 - Sair"<<endl;
	cin >> escolha;

	
	switch(escolha){
		case 0:
			return 0;
			break;		
		case 1:{
			Delta dt;
			ValorX1X2 vx1x2;
			cout << "Digite o valor de A: "<< endl;
			cin >> a;
			cout << "Digite o valor de A: "<< endl;
			cin >> b;
			cout << "Digite o valor de A: "<< endl;
			cin >> c;
			if ((dt.Calcula_Delta(a,b,c)) < 0)
				dt.Delta_erro();
		 else{
				*resultado = vx1x2.Calcula_X1X2(a,b,dt.Calcula_Delta(a,b,c));
				cout << "----------------------------Calculo Finalizado----------------------------" << endl;
				cout << "-------------------------------Resultados---------------------------------" << endl;
				cout << "X1 = " << resultado[0] <<" /  X2 = "<< resultado[1] << endl; 
			}
			break;
		}
			
		case 2:{
			
			
			break;
		}						
	}
	
	return 0;
}
