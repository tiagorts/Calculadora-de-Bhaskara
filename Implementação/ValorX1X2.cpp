#include <iostream>
#include <math.h>
#include "ValorX1X2.h"

using namespace std;

ValorX1X2::ValorX1X2(){
	A = 0;
	B = 0;
	delt = 0;
}

float ValorX1X2::Calcula_X1(float A, float B, float delt){
	float resultado;
	resultado = ((-B + sqrt(delt))/2*A);	
	return resultado;
}
float ValorX1X2::Calcula_X2(float A,float B,float delt){
	float resultado;
	resultado = ((-B - sqrt(delt))/2*A);	
	return resultado;
}

