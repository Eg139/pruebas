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
/*
int funcionFactorial (int numero)
{
  int factorial = numero;
  int factor = 1;


  if (numero == 0)
  {
    return 1;

  }

  for (factorial = numero; factorial > 0; factorial--)
    {
      factor = factor * factorial;
    }

  return (factor);
}*/


int validacionFactorial (float numero)
{
  float resultado;
  int factorial;


  resultado = numero - (int) numero;

  if (resultado == 0 && numero>=0)
    {
           if (numero == 0)
    	{
    		factorial = 1;
    	}else{
    		factorial= numero* validacionFactorial(numero - 1);
    	}
    	return factorial;
    }
  else
    {
      return -1;
    }
}





