#include <iostream>
#include <math.h>
#include "ValorX1X2.h"

using namespace std;

ValorX1X2::ValorX1X2(){
	A = 0;
	B = 0;
	delt = 0;
}

float ValorX1X2::Calcula_X1X2(float A, float B, float delt){
	float resultado[2];
	resultado[0] = ((-B + sqrt(delt))/2*A);
	resultado[1] = ((-B - sqrt(delt))/2*A);	
	
	return *resultado;
}


