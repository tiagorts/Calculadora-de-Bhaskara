#include <iostream>
#include <math.h>
#include "Delta.h"

using namespace std;

Delta::Delta(){
	A = 0;
	B = 0;
	C = 0;	
}

float Delta::Calcula_Delta(float A ,float B, float C){
	float resultado = 0;
	resultado = (pow(B,2)-4*A*C);
	return resultado;	
}

void Delta::Delta_erro(){
	cout << "ERRO: Delta Negativo" << endl;
	cout << "Impossivel calcular valores reais para X" << endl;	
}
