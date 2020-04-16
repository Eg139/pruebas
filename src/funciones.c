/*
 * funciones.c
 *
 *  Created on: 7 abr. 2020
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

float numero(void){
	float conseguirNumero;
	printf("Ingrese un numero: ");
	scanf("%f", &conseguirNumero);
	return conseguirNumero;
}

float suma(float num, float num1)
{
	float resultadoS;
	resultadoS = num + num1;
	return resultadoS;

}


float resta(float num, float num1)
{
	float resultadoR;

	resultadoR = num-num1;

	return resultadoR;

}

float multiplicacion(float num, float num1)
{
	float resultadoM;
	resultadoM = num * num1;
	return resultadoM;

}

float division(float num, float num1)
{
	float resultadoD;
	resultadoD= num / num1;
	return resultadoD;

}
int factorialA(float num)
{
	int resultadoA;

	if (num == 0)
	{
		resultadoA = 1;
	}else{
		resultadoA= num* factorialA(num - 1);
	}
	return resultadoA;
}






