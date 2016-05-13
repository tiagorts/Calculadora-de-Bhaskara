#include <iostream>
#include "Delta.h"
#include "ValorX1X2.h"
#include "Menssagem.h"

using namespace std;

int main(int argc, char** argv) {
	int escolha, flag;
	float a,b,c;
	float resultadoX1, resultadoX2;
	
	flag = -1;
	while(flag != 0){
		
		cout << "-------------------Calculadora de Bhaskara-------------------"<< endl;
		cout << "_____________________________________________________________"<< endl;
		cout << "-----------------------------Menu----------------------------"<< endl << endl;
		cout << "1 - Iniciar Calculo"<<endl;
		cout << "2 - Ajuda"<<endl;
		cout << "0 - Sair"<<endl;
		cin >> escolha;
	
		
		switch(escolha){
			case 0:
				flag = 0;
				break;		
			case 1:{
				Delta dt;
				ValorX1X2 vx;
				cout << "Digite o valor de A: "<< endl;
				cin >> a;
				cout << "Digite o valor de B: "<< endl;
				cin >> b;
				cout << "Digite o valor de C: "<< endl;
				cin >> c;
				if ((dt.Calcula_Delta(a,b,c)) < 0)
					dt.Delta_erro();
			 	else{
					resultadoX1 = vx.Calcula_X1(a,b,dt.Calcula_Delta(a,b,c));
					resultadoX2 = vx.Calcula_X2(a,b,dt.Calcula_Delta(a,b,c));
					cout << "----------------------------Calculo Finalizado----------------------------" << endl;
					cout << "-------------------------------Resultados---------------------------------" << endl;
					cout << "X1 = " << resultadoX1 <<" /  X2 = "<< resultadoX2 << endl; 
				}
				break;
			}
				
			case 2:{
				Chama_Ajuda();				
				break;
			}						
		}
	}
	
	Saida();
	system ("pause");
	
	return 0;
}
